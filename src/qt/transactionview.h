#ifndef TRANSACTIONVIEW_H
#define TRANSACTIONVIEW_H

#include <QWidget>
#include "listtransactions.h"
class WalletModel;
class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QTableView;
class QComboBox;
class QLineEdit;
class QModelIndex;
class QMenu;
class QFrame;
class TxViewDelegate;
class QDateTimeEdit;
class QSignalMapper;
QT_END_NAMESPACE

/** Widget showing the transaction list for a wallet, including a filter row.
    Using the filter row, the user can view or export a subset of the transactions.
  */
class TransactionView : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionView(QWidget *parent = 0);

    void setModel(WalletModel *model);

    // Date ranges for filter
    enum DateEnum
    {
        All,
        Today,
        ThisWeek,
        ThisMonth,
        LastMonth,
        ThisYear,
        Range
    };


private:
    WalletModel *model;
    TransactionFilterProxy *transactionProxyModel;
    ListTransactions *transactionView;

    QComboBox *dateWidget;
    QComboBox *typeWidget;
    QLineEdit *addressWidget;
    QLineEdit *amountWidget;

    QMenu *contextMenu;
    TxViewDelegate* m_delegate;
    QFrame *dateRangeWidget;
    QDateTimeEdit *dateFrom;
    QDateTimeEdit *dateTo;

    QSignalMapper *mapperThirdPartyTxUrls;

    QWidget *createDateRangeWidget();

private slots:
    void contextualMenu(const QPoint &);
    void dateRangeChanged();
    void showDetails();
    void copyAddress();
    void editLabel();
    void copyLabel();
    void copyAmount();
    void copyTxID();
    void openThirdPartyTxUrl(QString url);


signals:
    void doubleClicked(const QModelIndex&);

public slots:
    void chooseDate(int idx);
    void chooseType(int idx);
    void changedPrefix(const QString &prefix);
    void changedAmount(const QString &amount);
    void exportClicked();

    void focusTransaction(const QModelIndex&);
    void priceChanged(QString answer);
};

#endif // TRANSACTIONVIEW_H
