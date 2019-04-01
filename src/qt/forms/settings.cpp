#include "settings.h"
#include "ui_settings.h"
#include "about.h"
#include "rpcconsole_widget.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->b_backupWallet->setChecked(true);
    page_about = new about();
    page_console = new RPCConsole_Widget();
    ui->stackedWidget->addWidget(page_about);
    ui->stackedWidget->addWidget(page_console);
    selected =ui->b_backupWallet;

    connect(ui->b_about, SIGNAL(clicked()), this, SLOT( goToAbout()));
    connect(ui->b_backupWallet, SIGNAL(clicked()), this, SLOT(goToBackup()));
    connect(ui->b_change, SIGNAL(clicked()), this, SLOT(goToChange()));
    connect(ui->b_sign, SIGNAL(clicked()), this, SLOT(goToSign()));
    connect(ui->b_verify, SIGNAL(clicked()), this, SLOT(goToVerify()));
    connect(ui->b_console, SIGNAL(clicked()), this, SLOT(goToConsole()));
    connect(ui->b_encrypt, SIGNAL(clicked()), this, SLOT(goToEncrypt()));
    connect(ui->b_export, SIGNAL(clicked()), this, SLOT(goToExport()));
    connect(ui->b_options, SIGNAL(clicked()), this, SLOT(goToOptions()));
}

Settings::~Settings()
{
    delete ui;
}

void Settings::goToAbout(){
    if(selected == ui->b_about)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_about;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToBackup(){
    if(selected == ui->b_backupWallet)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_backupWallet;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToChange(){
    if(selected == ui->b_change)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_change;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToSign(){
    if(selected == ui->b_sign)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_sign;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToVerify(){
    if(selected == ui->b_verify)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_verify;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToConsole(){
    if(selected == ui->b_console)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_console;
    selected->setChecked(true);
    ui->stackedWidget->setCurrentWidget(page_console);
}
void Settings::goToEncrypt(){
    if(selected == ui->b_encrypt)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_encrypt;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToExport(){
    if(selected == ui->b_export)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_export;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
void Settings::goToOptions(){
    if(selected == ui->b_options)
    {
        selected->setChecked(true);
        return;
    }
    selected->setChecked(false);
    selected = ui->b_options;
    selected->setChecked(true);
    //ui->stackedWidget->setCurrentWidget(page_about);
}
