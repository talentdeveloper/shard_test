#ifndef SETTINGS_H
#define SETTINGS_H

#include "export.h"

#include <QWidget>
#include <QPushButton>
class about;
class RPCConsole_Widget;

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    enum Actions {
        Encrypt = 0,
        Backup = 1,
        Sign = 3,
        Verify = 4,
        Change = 5,
        Options = 6,
    };
    explicit Settings(QWidget *parent = 0);
    void connectExternalAction(Actions action, const QObject *receiver, const char *method);
    void connectExportAction(Export::Types action, const QObject *receiver, const char *method);
    void setEncryptionEnabled(bool status);
    ~Settings();

private:
    Ui::Settings *ui;
    about* page_about;
    RPCConsole_Widget* page_console;
    Export* page_export;
    QPushButton* selected;
private slots:
    void goToAbout();

    void goToBackup();
    void goToChange();
    void goToSign();
    void goToVerify();
    void goToConsole();
    void goToNetwork();
    void goToEncrypt();
    void goToExport();
    void goToOptions();
};

#endif // SETTINGS_H
