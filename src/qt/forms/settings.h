#ifndef SETTINGS_H
#define SETTINGS_H

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
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private:
    Ui::Settings *ui;
    about* page_about;
    RPCConsole_Widget* page_console;
    QPushButton* selected;
private slots:
    void goToAbout();

    void goToBackup();
    void goToChange();
    void goToSign();
    void goToVerify();
    void goToConsole();
    void goToEncrypt();
    void goToExport();
    void goToOptions();
};

#endif // SETTINGS_H
