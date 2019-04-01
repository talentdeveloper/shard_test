#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    connect(ui->aboutButton, SIGNAL(clicked()), qApp, SLOT(aboutQt()));
}

about::~about()
{
    delete ui;
}
