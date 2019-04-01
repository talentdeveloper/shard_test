#include "overviewpage.h"
#include "ui_overviewpage.h"
#include "clientmodel.h"
#include "walletmodel.h"
#include "guiutil.h"
#include "optionsmodel.h"
#include "txviewdelegate.h"
#include "transactionfilterproxy.h"
#include "guiconstants.h"
#include "transactiontablemodel.h"



QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
OverviewPage::OverviewPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OverviewPage),
    clientModel(0),
    walletModel(0),
    currentBalance(-1),
    currentStake(0),
    currentUnconfirmedBalance(-1),
    currentImmatureBalance(-1),
    txdelegate(new TxViewDelegate()),
    filter(0)
{


    ui->setupUi(this);


    // Recent transactions
    ui->listTransactions->setItemDelegate(txdelegate);

    ui->listTransactions->setIconSize(QSize(DECORATION_SIZE, DECORATION_SIZE));
    ui->listTransactions->setMinimumHeight(NUM_ITEMS * (DECORATION_SIZE + 2));
    ui->listTransactions->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->listTransactions->setEditTriggers(QAbstractItemView::AnyKeyPressed);
    ui->listTransactions->setResizeMode(QListView::Adjust);
    ui->listTransactions->setStyleSheet("QListView{ border:0px;} QListView::item{border:1px white;}");
    ui->listTransactions->verticalScrollBar()->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {"              
    "    border: 1px solid;"
    "       border-color: #0a1c2b;"
    "    background: #001B26;"
    "    width:10px;    "
    "    margin: 0px 0px 0px 0px;"
    "       border-radius:30px;"
    "       border-style: outset;"
    "}"

    "QScrollBar::handle:vertical {"
    "background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 rgb(0, 55, 80), stop:1 rgb(0, 55, 80));"
    "border: 1px solid rgb(0, 55, 80);"
    "width: 18px;"
    "margin: -2px 0;"
    "border-radius: 4px;"
    "}"
    "QScrollBar::add-line:vertical {"
    "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
    "    stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));"
    "    height: 0px;"
    "    subcontrol-position: bottom;"
    "    subcontrol-origin: margin;"
    "}"
    "QScrollBar::sub-line:vertical {"
    "    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
    "    stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));"
    "    height: 0 px;"
    "    subcontrol-position: top;"
    "    subcontrol-origin: margin;"
    "}"
    ));

    QFont bal = ui->labelBalance->font();
    bal.setPointSizeF(40);
    ui->labelBalance->setFont(bal);

    // Added for Total Price
    QFont totalPriceFont = ui->labelTotalPrice->font();
    totalPriceFont.setPointSizeF(20);
    ui->labelTotalPrice->setFont(totalPriceFont);

    QFont stake = ui->labelStake->font();
    stake.setPointSizeF(30);
    ui->labelStake->setFont(stake);

    QFont unconfirmed = ui->labelUnconfirmed->font();
    unconfirmed.setPointSizeF(30);
    ui->labelUnconfirmed->setFont(unconfirmed);
    ui->graphView->setBackground(QColor("#102537"));
    ui->graphView->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
    ui->graphView->addGraph();
    ui->graphView->graph()->setLineStyle(QCPGraph::lsLine);
    ui->graphView->graph()->setPen(QPen(QColor("#0adbf0")));
    ui->graphView->graph()->setBrush(QBrush(QColor("#003750")));

    dateTicker->setDateTimeFormat("HH:mm");
    dateTicker->setTickCount(5);
    ui->graphView->xAxis->setTickLabelColor(QColor("#ffffff"));
    ui->graphView->yAxis->setTickLabelColor(QColor("#ffffff"));
    ui->graphView->xAxis->setBasePen(QColor("#ffffff"));
    ui->graphView->yAxis->setBasePen(QColor("#ffffff"));
    ui->graphView->xAxis->setTickPen(QColor("#ffffff"));
    ui->graphView->yAxis->setTickPen(QColor("#ffffff"));
    ui->graphView->yAxis->setSubTickPen(QColor("#ffffff"));
    ui->graphView->xAxis->setSubTickPen(QColor("#ffffff"));
    ui->graphView->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
    ui->graphView->yAxis->setTickLabelFont(QFont(QFont().family(), 8));
    ui->graphView->xAxis->grid()->setVisible(false);
    ui->graphView->yAxis->grid()->setVisible(false);
    ui->graphView->xAxis->setTicker(dateTicker);

    ui->changeTime->setItemDelegate(new QStyledItemDelegate());
    ui->changeTime->addItem("5 minutes");
    ui->changeTime->addItem("15 minutes");
    ui->changeTime->addItem("30 minutes");
    ui->changeTime->addItem("1 hour");
    ui->changeTime->addItem("1 day");
    ui->changeTime->addItem("1 week");
    ui->changeTime->addItem("1 month");
    ui->changeTime->setCurrentIndex(4);
    
    ui->graphSelector->setItemDelegate(new QStyledItemDelegate());
    ui->graphSelector->addItem("Price Graph");
    ui->graphSelector->addItem("Balance Graph");
    ui->graphSelector->addItem("Staked Graph");
    ui->graphSelector->setCurrentIndex(0);

    ui->graphSelector->setCurrentIndex(0);
    connect(ui->listTransactions, SIGNAL(clicked(QModelIndex)), this, SLOT(handleTransactionClicked(QModelIndex)));
    connect(ui->moreButton, SIGNAL(clicked()), this, SLOT(handleMoreClicked()));
    connect(txdelegate, SIGNAL(transactionClicked(QModelIndex)),this, SLOT(transactionClickedMethod(QModelIndex)));
    connect(ui->ui_recieve, SIGNAL(clicked()), this, SLOT(toRecieve()));
    connect(ui->ui_send, SIGNAL(clicked()), this, SLOT(toSend()));

    connect(ui->changeTime,SIGNAL(currentIndexChanged(int)),this,SLOT(indexChanged(int)));
    connect(ui->graphSelector,SIGNAL(currentIndexChanged(int)),this,SLOT(balanceButtonClicked(int)));
    showOutOfSyncWarning(true);
}
int lastIndex = 5;
void OverviewPage::indexChanged(int index){

    lastIndex = index+1;
     emit changeIndex(index+1);
}
void OverviewPage::balanceButtonClicked(int index){
    if(index == 1)
    {

        dateTicker->setDateTimeFormat("MMM dd");
        QDateTime start = QDateTime::currentDateTime();
        QTime tt = start.time();
        tt.setHMS(0,0,0);
        start.setTime(tt);
        QDateTime end = QDateTime::currentDateTime();
        start = start.addDays(-30);
        ui->graphView->xAxis->setRange(start.toTime_t(), end.toTime_t());
        double min;
        double max;
        QVector<QCPGraphData> timeData(30);

        for(int i = 0;i<30;i++){

            double val = walletModel->getTransactionTableModel()->mapTransactions[start.toMSecsSinceEpoch()/1000];
            if(i == 0)
            {
                max = min = val;
            }
            timeData[i].key = start.toTime_t();
            timeData[i].value = val;
            if(min > val)
                min = val;
            if(max < val)
                max = val;
            start = start.addDays(1);
        }
        ui->graphView->graph()->data()->set(timeData);

        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        double starta = min;
        double inc = (max - min)/6;
        for(int i = 0;i<7;i++){
            textTicker->addTick(starta, QString::number(starta/(100000000),'f'));
            starta+= inc;
        }

        ui->graphView->yAxis->setTicker(textTicker);
        if(min == 0)
            ui->graphView->yAxis->setRange(0,max+inc);
        else
            ui->graphView->yAxis->setRange(min-inc,max+inc);
        ui->changeTime->setEnabled(false);
        ui->changeTime->setVisible(false);
        ui->graphView->replot();
    }
    else if(index == 0){
        ui->changeTime->setEnabled(true);
        ui->changeTime->setVisible(true);
        indexChanged(lastIndex-1);
    }
    else if(index == 2)
    {
        dateTicker->setDateTimeFormat("MMM dd");
        QDateTime start = QDateTime::currentDateTime();
        QTime tt = start.time();
        tt.setHMS(0,0,0);
        start.setTime(tt);
        QDateTime end = QDateTime::currentDateTime();
        start = start.addDays(-30);
        ui->graphView->xAxis->setRange(start.toTime_t(), end.toTime_t());
        double min;
        double max;
        QVector<QCPGraphData> timeData(30);
        for(int i = 0;i<30;i++){

            double val = walletModel->getTransactionTableModel()->mapDebit[start.toMSecsSinceEpoch()/1000];
            if(i == 0)
            {

                max = min = val;
            }
            timeData[i].key = start.toTime_t();
            timeData[i].value = val;
            if(min > val)
                min = val;
            if(max < val)
                max = val;
            start = start.addDays(1);
        }
        ui->graphView->graph()->data()->set(timeData);

        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        double starta = min;
        double inc = (max - min)/6;
        for(int i = 0;i<7;i++){
            textTicker->addTick(starta, QString::number(starta/(100000000),'f'));
            starta+= inc;
        }

        ui->graphView->yAxis->setTicker(textTicker);
        if(min == 0)
            ui->graphView->yAxis->setRange(0,max+inc);
        else
            ui->graphView->yAxis->setRange(min-inc,max+inc);
        ui->changeTime->setEnabled(false);
        ui->changeTime->setVisible(false);
        ui->graphView->replot();
    }
}


void OverviewPage::toRecieve(){
    emit recieveTransaction();
}
void OverviewPage::toSend(){
    emit sendTransaction();
}

// void OverViewPage::updateTotalPrice(Qstring answer, qint64 balance){
//     QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
//     if(!doc.isNull()){
//         ui->labelTotalPrice->setText("$ " + 10 * model->getBalance());
//     }
// }
void OverviewPage::priceChanged(QString answer){
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    if(!doc.isNull()){
        QJsonObject obj = doc.object();
        double price  = obj.value("price").toDouble();
        double volume  = obj.value("volume").toDouble();
        double market  = obj.value("market cap").toDouble();
        double change = obj.value("change").toDouble();
        this->realtimePrice = price;
        ui->m_price->setText("$ "+QString::number(price,'f',6)+" / SHARD");
        ui->m_change->setText(QString::number(change,'f',2)+" %");
        ui->m_cap->setText(QString::number(market,'f',2)+" $");
        ui->m_volume->setText(QString::number(volume,'f',2)+" $");
        txdelegate->setPrice(price);
        int height = ui->listTransactions->height();
        ui->listTransactions->setFixedHeight(height);
        // WalletModel *model = new WalletModel();
        // ui->labelTotalPrice->setText("$ " + 10 * model->getBalance());

    }
}
void OverviewPage::graphChanged(QString answer){
    if(!ui->changeTime->isEnabled())
        return;
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    if(!doc.isNull()){

        QJsonObject obj = doc.object();
        QJsonArray res = obj.value("result").toArray();
        //QLineSeries*  seriesHIGH = new QLineSeries();
        //QLineSeries*  seriesLOW = new QLineSeries();
        double min = 9999999999;
        double max = -999999999;

        QVector<QCPGraphData> timeData(30);
        QDateTime maxx = QDateTime::currentDateTime();
        QDateTime minx=QDateTime::currentDateTime();
        for(int i = 0;i<30;i++){
            if(i != 0){
            if(lastIndex == 1){
                minx = minx.addSecs(-60*5);

            }
            else if(lastIndex == 2){
                minx=minx.addSecs(-60*15);
            }
            else if(lastIndex == 3){
                minx=minx.addSecs(-60*30);
            }
            else if(lastIndex == 4){
                minx=minx.addSecs(-60*60);
            }
            else if(lastIndex == 5){
                minx=minx.addSecs(-60*60*24);
            }
            else if(lastIndex == 6){
                 minx=minx.addSecs(-60*60*24*7);

            }
            else if(lastIndex == 7){
                 minx=minx.addSecs(-60*60*24*30);
            }
            }
            if(res.count() > i){

                QJsonObject aux = res.at(i).toObject();

                double minV = aux["min"].toDouble();
                double maxV = aux["max"].toDouble();
                timeData[i].key = minx.toTime_t();
                timeData[i].value = (maxV + minV) * 0.5 ;

                if(aux["max"].toDouble()>max)
                    max = aux["max"].toDouble();
                if(aux["min"].toDouble()<min)
                    min = aux["min"].toDouble();
            }else{
                timeData[i].key = minx.toTime_t();
                timeData[i].value = 0 ;
                min = 0;
            }



        }

        if(lastIndex == 1){
            dateTicker->setDateTimeFormat("HH:mm");

        }
        else if(lastIndex == 2){
            dateTicker->setDateTimeFormat("HH:mm");
        }
        else if(lastIndex == 3){
               dateTicker->setDateTimeFormat("HH:mm");
        }
        else if(lastIndex == 4){
            dateTicker->setDateTimeFormat("HH:mm");
        }
        else if(lastIndex == 5){
              dateTicker->setDateTimeFormat("MMM dd");
        }
        else if(lastIndex == 6){
              dateTicker->setDateTimeFormat("MMM dd");

        }
        else if(lastIndex == 7){
            dateTicker->setDateTimeFormat("MMM yyyy");
        }
        ui->graphView->graph()->data()->set(timeData);
        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        double start = min;
        double inc = (max - min)/6;
        for(int i = 0;i<7;i++){
            textTicker->addTick(start, QString::number(start,'f',5));
            start+= inc;
        }

        ui->graphView->yAxis->setTicker(textTicker);
        ui->graphView->xAxis->setRange(minx.toTime_t(), maxx.toTime_t());
        if(min ==  0)
            ui->graphView->yAxis->setRange(0, max+inc);
        else
            ui->graphView->yAxis->setRange(min-inc, max+inc);
        ui->graphView->replot();
        //seriesHIGH->setColor(QColor("#0adbf0"));
        //seriesLOW->setColor(QColor("#ffffff"));
        //setRangeChart(minx,maxx,min,max,seriesLOW,seriesHIGH);
        //chart->update(chart->rect());
    }

}
void OverviewPage::handleTransactionClicked(const QModelIndex &index)
{
    int height = ui->listTransactions->height();
    ui->listTransactions->setFixedHeight(height+1);
    ui->listTransactions->setFixedHeight(height);
}
void OverviewPage::transactionClickedMethod(const QModelIndex &index)
{
    if(filter)
        emit transactionClicked(filter->mapToSource(index));
}
void OverviewPage::handleMoreClicked()
{
    emit moreClicked();
}
OverviewPage::~OverviewPage()
{
    delete ui;
}

void OverviewPage::setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance)
{
    int unit = walletModel->getOptionsModel()->getDisplayUnit();
    currentBalance = balance;
    currentStake = stake;
    currentUnconfirmedBalance = unconfirmedBalance;
    currentImmatureBalance = immatureBalance;
    ui->labelBalance->setText(BitcoinUnits::formatWithUnit(unit, balance).split(' ')[0]);
    //ui->labelBalance->setText("10,000,000.096463535");
    QFont ft = ui->labelBalance->font();
    QFontMetrics mt(ft);
    ft.setPointSizeF(35);
    if(mt.width(ui->labelBalance->text()) > ui->labelBalance->width()){
        double aux = (double)ui->labelBalance->width() / (double)mt.width(ui->labelBalance->text());
        ft.setPointSizeF(35*aux*0.95);
    }
    ui->labelBalance->setFont(ft);

    // Add total price
    
    // QFont fontTotalPrice = ui->lableTotalPrice->font();
    // QFontMetrics mtTotalPrice(fontTotalPrice);
    // fontTotalPrice.setPointSizeF(15);
    QString s1;
    s1.setNum(this->realtimePrice * balance / 100000000.00);
    ui->labelTotalPrice->setText("$ " + s1);


    ui->labelStake->setText(BitcoinUnits::formatWithUnit(unit, stake).split(' ')[0]);

    QFont ft2 = ui->labelStake->font();
    QFontMetrics mt2(ft2);
    ft2.setPointSizeF(25);
    if(mt2.width(ui->labelStake->text()) > ui->labelStake->width()){
        double aux = (double)ui->labelStake->width() / (double)mt2.width(ui->labelStake->text());
        ft2.setPointSizeF(25*aux*0.95);
    }
    ui->labelStake->setFont(ft2);
    ui->labelUnconfirmed->setText(BitcoinUnits::formatWithUnit(unit, unconfirmedBalance).split(' ')[0]);
    //ui->labelUnconfirmed->setText("10,000,000.096463535");

    QFont ft3 = ui->labelUnconfirmed->font();
    QFontMetrics mt3(ft3);
    ft3.setPointSizeF(25);
    if(mt3.width(ui->labelUnconfirmed->text()) > ui->labelUnconfirmed->width()){
        double aux = (double)ui->labelUnconfirmed->width() / (double)mt3.width(ui->labelUnconfirmed->text());
        ft3.setPointSizeF(25*aux*0.95);
    }
    ui->labelUnconfirmed->setFont(ft3);




    //ui->labelImmature->setText(BitcoinUnits::formatWithUnit(unit, immatureBalance));
    //ui->labelTotal->setText(BitcoinUnits::formatWithUnit(unit, balance + stake + unconfirmedBalance + immatureBalance));

    // only show immature (newly mined) balance if it's non-zero, so as not to complicate things
    // for the non-mining users
    //bool showImmature = immatureBalance != 0;
    //ui->labelImmature->setVisible(showImmature);
    //ui->labelImmatureText->setVisible(showImmature);
}

void OverviewPage::setClientModel(ClientModel *model)
{
    this->clientModel = model;
    if(model)
    {
        // Show warning if this is a prerelease version
        connect(model, SIGNAL(alertsChanged(QString)), this, SLOT(updateAlerts(QString)));
        updateAlerts(model->getStatusBarWarnings());
    }
}

void OverviewPage::setWalletModel(WalletModel *model)
{
    this->walletModel = model;
    if(model && model->getOptionsModel())
    {
        // Set up transaction list
        filter = new TransactionFilterProxy();
        filter->setSourceModel(model->getTransactionTableModel());
        filter->setLimit(NUM_ITEMS);
        filter->setDynamicSortFilter(true);
        filter->setSortRole(Qt::EditRole);
        filter->setShowInactive(false);
        //filter->sort(TransactionTableModel::Status, Qt::DescendingOrder);
        filter->sort(TransactionTableModel::Date, Qt::DescendingOrder);

        ui->listTransactions->setModel(filter);
        ui->listTransactions->setModelColumn(TransactionTableModel::ToAddress);

        // Keep up to date with wallet
        setBalance(model->getBalance(), model->getStake(), model->getUnconfirmedBalance(), model->getImmatureBalance());
        // updateTotalPrice(, model->getBalance());
        connect(model, SIGNAL(balanceChanged(qint64, qint64, qint64, qint64)), this, SLOT(setBalance(qint64, qint64, qint64, qint64)));

        connect(model->getOptionsModel(), SIGNAL(displayUnitChanged(int)), this, SLOT(updateDisplayUnit()));
    }

    // update the display unit, to not use the default ("BTC")
    updateDisplayUnit();
}


void OverviewPage::updateDisplayUnit()
{
    if(walletModel && walletModel->getOptionsModel())
    {
        if(currentBalance != -1)
            setBalance(currentBalance, walletModel->getStake(), currentUnconfirmedBalance, currentImmatureBalance);

        // Update txdelegate->unit with the current unit
        txdelegate->unit = walletModel->getOptionsModel()->getDisplayUnit();

        ui->listTransactions->update();
    }
}

void OverviewPage::updateAlerts(const QString &warnings)
{
    //this->ui->labelAlerts->setVisible(!warnings.isEmpty());
    //this->ui->labelAlerts->setText(warnings);
}

void OverviewPage::showOutOfSyncWarning(bool fShow)
{
    //ui->labelWalletStatus->setVisible(fShow);
    //ui->labelTransactionsStatus->setVisible(fShow);
}

