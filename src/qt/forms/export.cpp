#include "export.h"
#include "ui_export.h"

Export::Export(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Export)
{
    ui->setupUi(this);

    ui->exportType->addItem("Transactions");
    ui->exportType->addItem("Receive Addresses");
    ui->exportType->addItem("Address Book");

    connect(ui->exportButton, SIGNAL(pressed()), this, SLOT(doExport()));
}

Export::~Export()
{
    delete ui;
}

void Export::doExport(){
    int type = ui->exportType->currentIndex();
    switch(type) {
    case Transactions:
        emit exportTransactions();
        break;
    case ReceiveAddresses:
        emit exportReceiveAddresses();
        break;
    case AddressBook:
        emit exportAddressBook();
        break;
    }
}
