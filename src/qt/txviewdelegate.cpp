#include "txviewdelegate.h"
#include "transactiontablemodel.h"

void TxViewDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                  const QModelIndex &index ) const
{

    painter->save();
    bool found = false;
    for(int  i = 0;i< indexrow.size();i++){
        if (index.row() == indexrow[i])
            found = true;
    }



    QRect mainRect = option.rect;
    mainRect.setX(mainRect.x()-1);

    painter->setPen(QColor("#002d3f"));

    const TransactionTableModel* tr= static_cast<const TransactionTableModel*>(index.model());
    if(tr->hover == index.row()){
        QRect rectD(mainRect.right() - 60,mainRect.top(),60,mainRect.height());
        if(found){
            rectD.setHeight(mainRect.height()/3);
        }
        painter->fillRect(rectD,QColor("#003750"));
    }

     painter->drawRect(mainRect);


    if(found){
        mainRect.setHeight(mainRect.height()/3);
    }

    int xspacedata = 40;
    QRect dateRect(mainRect.topLeft(), QSize(DECORATION_SIZE, DECORATION_SIZE/2.2));
    QRect decorationRect(dateRect.left()+xspacedata,mainRect.top(),DECORATION_SIZE, DECORATION_SIZE);

    int xspace = DECORATION_SIZE + 8;
    int ypad = 6;
    int halfheight = (mainRect.height() - 2*ypad)/2;
    QRect detailsRect(mainRect.right() - 50,mainRect.top(),50,halfheight);
    QRect amountRect(decorationRect.left() + xspace, mainRect.top()+ypad, mainRect.width() - xspace -decorationRect.width()-65, halfheight);

    QRect typeRect(decorationRect.left() + xspace, mainRect.top()+ypad+halfheight, mainRect.width() - xspace -decorationRect.width()-65, halfheight);
    QRect dateRect2(mainRect.topLeft(), QSize(DECORATION_SIZE, DECORATION_SIZE));



    QDateTime date = index.data(TransactionTableModel::DateRole).toDateTime();
    QString address = index.data(Qt::DisplayRole).toString();
    qint64 amount = index.data(TransactionTableModel::AmountRole).toLongLong();
    bool confirmed = index.data(TransactionTableModel::ConfirmedRole).toBool();
    QVariant value = index.data(Qt::ForegroundRole);
    QColor foreground = option.palette.color(QPalette::Text);
    if(qVariantCanConvert<QColor>(value))
    {
        foreground = qvariant_cast<QColor>(value);
    }

    painter->setPen(foreground);

    QString type = getTypeString(index.data(TransactionTableModel::TypeRole).toInt());

    QIcon icon = getTypeIcon(index.data(TransactionTableModel::TypeRole).toInt());


    icon.paint(painter, decorationRect);

    painter->setPen(QColor("#7891a7"));
    painter->drawText(typeRect, Qt::AlignRight|Qt::AlignVCenter, type);


    QString amountText = BitcoinUnits::formatWithUnit(unit, amount, true);
    if(!confirmed)
    {
        amountText = QString("[") + amountText + QString("]");
    }
    QFont f = painter->font();
    f.setBold(true);
    painter->setPen(QColor("#45acbd"));
     painter->setFont(f);
    painter->drawText(amountRect, Qt::AlignRight|Qt::AlignVCenter, amountText);
    f.setBold(false);
     painter->setFont(f);
    painter->setPen(QColor("#7891a7"));
    QString dateString= date.toString("MMM");


    f.setPointSize(f.pointSize()*0.9);
    painter->setFont(f);
    painter->drawText(dateRect, Qt::AlignHCenter|Qt::AlignBottom, dateString);
    dateString= date.toString("dd");

    dateRect2.setY(dateRect2.y()+dateRect.height());

    f.setPointSize(f.pointSize()*1.8);
    painter->setFont(f);
    painter->drawText(dateRect2, Qt::AlignHCenter|Qt::AlignTop, dateString);


    if(found){


        painter->drawImage(detailsRect.x(),detailsRect.y() + mainRect.height()*0.5 -details.height()*0.5,details2);
    }
    else{

        painter->drawImage(detailsRect.x(),detailsRect.y() + mainRect.height()*0.5 -details.height()*0.5,details);
    }
    if(found){
        f.setPointSize(f.pointSize()*0.5);
           f.setBold(true);
        painter->setFont(f);
        QFontMetrics mt(painter->font());

        QString address = index.data(TransactionTableModel::AddressRole).toString();
           QString txid = index.data(TransactionTableModel::TxIDRole).toString();
        bool confirmed = index.data(TransactionTableModel::ConfirmedRole).toBool();
        QString confirmed2 = index.data(TransactionTableModel::ConfirmationsRole).toString();
        QRect addressRect2(mainRect.bottomLeft().x()+6,mainRect.bottomLeft().y(), mainRect.width(),mt.height()+2);
        QRect addressRectValue2(addressRect2.bottomLeft().x(),mainRect.bottomLeft().y()+mt.height()+2, mainRect.width(),mt.height()+2);


        painter->drawText(addressRect2, Qt::AlignLeft|Qt::AlignTop, "ADDRESS");
           f.setBold(false);
          painter->setFont(f);
        if(address.length() > 0)
        {
            painter->drawText(addressRectValue2, Qt::AlignLeft|Qt::AlignTop, address);
        }else{
            painter->drawText(addressRectValue2, Qt::AlignLeft|Qt::AlignTop, "Internal transaction");

        }
        f.setBold(true);
        painter->setFont(f);
        QRect confirmationsRect2(addressRect2.bottomLeft().x(),mainRect.bottomLeft().y()+mt.height()+4+mt.height()+6, mainRect.width(),mt.height()+2);
        QRect confirmationsRectValue2(addressRect2.bottomLeft().x(),mainRect.bottomLeft().y()+mt.height()+4+mt.height()+4+mt.height()+2, mainRect.width(),mt.height()+2);
        painter->drawText(confirmationsRect2, Qt::AlignLeft|Qt::AlignTop, "CONFIRMATIONS");
        f.setBold(false);
        painter->setFont(f);
        if(confirmed)
        {
            painter->drawText(confirmationsRectValue2, Qt::AlignLeft|Qt::AlignTop, "Confirmed ("+confirmed2+" confirmations)");
        }else{
            painter->drawText(confirmationsRectValue2, Qt::AlignLeft|Qt::AlignTop, "Unconfirmed ("+confirmed2+" confirmations)");

        }
        QRect idRect2(mainRect.bottomLeft().x()+6,confirmationsRectValue2.bottomLeft().y()+6, mainRect.width(),mt.height()+2);
        QRect idValue2(mainRect.bottomLeft().x()+6,confirmationsRectValue2.bottomLeft().y()+6+mt.height()+2, mainRect.width(),mt.height()+2);
        f.setBold(true);
        painter->setFont(f);
        painter->drawText(idRect2, Qt::AlignLeft|Qt::AlignTop, "TRANSACTION ID");
        f.setBold(false);
        painter->setFont(f);
        painter->drawText(idValue2, Qt::AlignLeft|Qt::AlignTop, txid);


        QRect dateRect2(mainRect.bottomLeft().x()+6+mainRect.width()*0.6,mainRect.bottomLeft().y(), mainRect.width(),mt.height()+2);
        QRect dateRectValue2(mainRect.bottomLeft().x()+6+mainRect.width()*0.6,mainRect.bottomLeft().y()+mt.height()+2, mainRect.width(),mt.height()+2);
        f.setBold(true);
        painter->setFont(f);
        painter->drawText(dateRect2, Qt::AlignLeft|Qt::AlignTop, "DATE");
        f.setBold(false);
        painter->setFont(f);
        painter->drawText(dateRectValue2, Qt::AlignLeft|Qt::AlignTop, date.toString("dd/MM/yyyy HH:mm:ss"));


        QRect priceRect2(mainRect.bottomLeft().x()+6+mainRect.width()*0.6,mainRect.bottomLeft().y()+mt.height()+2+mt.height()+6, mainRect.width(),mt.height()+2);
        QRect priceRectValue2(mainRect.bottomLeft().x()+6+mainRect.width()*0.6,mainRect.bottomLeft().y()+mt.height()+2+mt.height()+6+mt.height()+2, mainRect.width(),mt.height()+2);
        f.setBold(true);
        painter->setFont(f);
        painter->drawText(priceRect2, Qt::AlignLeft|Qt::AlignTop, "PRICE");
        f.setBold(false);
        painter->setFont(f);
        painter->drawText(priceRectValue2, Qt::AlignLeft|Qt::AlignTop, QString::number(price*amount/(100000000),'f')+"$");

    }

    painter->restore();
}
bool TxViewDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index){
    if(event->type() == QEvent::MouseButtonRelease){
        QMouseEvent* e = (QMouseEvent*)event;
        QPoint pos = e->pos();
        QRect mainRect = option.rect;
        int found = -1;
        for(int  i = 0;i< indexrow.size();i++){
            if (index.row() == indexrow[i])
                found = i;
        }
        QRect detailsRect(mainRect.right() - 60,mainRect.top(),60,mainRect.height());
        if(found != -1)
            detailsRect.setHeight(mainRect.height()/3);
        if(detailsRect.contains(pos)){

            if(found == -1)
                indexrow.push_back(index.row());
            else
                indexrow.erase(indexrow.begin()+found);
        }
        else{
            if(found != -1){
                if(pos.y() > mainRect.height()/3){
                    emit transactionClicked(option.index);
                }
            }
        }
    }


}

QSize TxViewDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    for(int  i = 0;i< indexrow.size();i++){
        if (index.row() == indexrow[i])
            return(QSize(DECORATION_SIZE, DECORATION_SIZE*2.8));
    }

    return QSize(DECORATION_SIZE, DECORATION_SIZE);
}
QString TxViewDelegate::getTypeString(int type) const{

    switch(type)
    {
    case 4:
        return tr("You received");
    case 5:
        return tr("You received");
    case 2:
    case 3:
        return tr("You sent");
    case 6:
        return tr("Payment to yourself");
    case 1:
        return tr("Mined");
    default:
        return QString();
    }
}
QIcon TxViewDelegate::getTypeIcon(int type) const{

    switch(type)
    {
    case 4:
        return incoming;
    case 5:
        return incoming;
    case 2:
    case 3:
        return outgoing;
    case 6:
        return yourself;
    case 1:
        return mined;
    default:
        return incoming;
    }
}

void TxViewDelegate::setPrice(double price)
{
    this->price = price;

}
