#include <vector>
#include "bitcoinunits.h"
#include <QAbstractItemDelegate>
#include <QPainter>
#include <QDateTime>
#include <QMouseEvent>
#define DECORATION_SIZE 64
#define NUM_ITEMS 6


class TxViewDelegate : public QAbstractItemDelegate
{
    Q_OBJECT
signals:
    void transactionClicked(const QModelIndex &index);

public:
    QImage details;
    QImage details2;
    QIcon incoming;
    QIcon outgoing;

    QIcon yourself;
    QIcon mined;
    std::vector<int> indexrow = std::vector<int>();
    TxViewDelegate(): QAbstractItemDelegate(), unit(BitcoinUnits::BTC)
    {
        details = QImage(":/images/res/images/details.png");
        outgoing = QIcon(":/images/res/images/outgoing.png");
        incoming = QIcon(":/images/res/images/incoming.png");
        mined = QIcon(":/images/res/images/mined.png");
        yourself = QIcon(":/images/res/images/yourself.png");
        details2 = QImage(":/images/res/images/details2.png");


    }
    void paint(QPainter *painter, const QStyleOptionViewItem &option,const QModelIndex &index ) const;
    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
    QString getTypeString(int type) const;
    QIcon getTypeIcon(int type) const;
    void setPrice(double price);

    int unit;
private:
     double price;

};
