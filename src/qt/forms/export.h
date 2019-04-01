#ifndef EXPORT_H
#define EXPORT_H

#include <QWidget>

namespace Ui {
class Export;
}

class Export : public QWidget
{
    Q_OBJECT

public:
    enum Types {
        Transactions = 0,
        ReceiveAddresses = 1,
        AddressBook = 2,
    };

    explicit Export(QWidget *parent = 0);
    ~Export();

signals:
    void exportTransactions();
    void exportReceiveAddresses();
    void exportAddressBook();

private:
    Ui::Export *ui;

private slots:
    void doExport();
};

#endif // EXPORT_H
