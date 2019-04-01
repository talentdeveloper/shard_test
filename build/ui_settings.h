/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QPushButton *b_backupWallet;
    QPushButton *b_export;
    QPushButton *b_sign;
    QPushButton *b_verify;
    QPushButton *b_encrypt;
    QPushButton *b_change;
    QPushButton *b_options;
    QPushButton *b_console;
    QPushButton *b_about;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(971, 620);
        horizontalLayoutWidget = new QWidget(Settings);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, -1, 971, 621));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(180, 0));
        label->setStyleSheet(QStringLiteral("padding:15px;background:#1d1b29;color:white;font-size:20px;"));

        verticalLayout_3->addWidget(label);

        b_backupWallet = new QPushButton(horizontalLayoutWidget);
        b_backupWallet->setObjectName(QStringLiteral("b_backupWallet"));
        b_backupWallet->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_backupWallet->setCheckable(true);
        b_backupWallet->setChecked(false);

        verticalLayout_3->addWidget(b_backupWallet);

        b_export = new QPushButton(horizontalLayoutWidget);
        b_export->setObjectName(QStringLiteral("b_export"));
        b_export->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_export->setCheckable(true);

        verticalLayout_3->addWidget(b_export);

        b_sign = new QPushButton(horizontalLayoutWidget);
        b_sign->setObjectName(QStringLiteral("b_sign"));
        b_sign->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_sign->setCheckable(true);

        verticalLayout_3->addWidget(b_sign);

        b_verify = new QPushButton(horizontalLayoutWidget);
        b_verify->setObjectName(QStringLiteral("b_verify"));
        b_verify->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_verify->setCheckable(true);

        verticalLayout_3->addWidget(b_verify);

        b_encrypt = new QPushButton(horizontalLayoutWidget);
        b_encrypt->setObjectName(QStringLiteral("b_encrypt"));
        b_encrypt->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_encrypt->setCheckable(true);

        verticalLayout_3->addWidget(b_encrypt);

        b_change = new QPushButton(horizontalLayoutWidget);
        b_change->setObjectName(QStringLiteral("b_change"));
        b_change->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_change->setCheckable(true);

        verticalLayout_3->addWidget(b_change);

        b_options = new QPushButton(horizontalLayoutWidget);
        b_options->setObjectName(QStringLiteral("b_options"));
        b_options->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_options->setCheckable(true);

        verticalLayout_3->addWidget(b_options);

        b_console = new QPushButton(horizontalLayoutWidget);
        b_console->setObjectName(QStringLiteral("b_console"));
        b_console->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_console->setCheckable(true);

        verticalLayout_3->addWidget(b_console);

        b_about = new QPushButton(horizontalLayoutWidget);
        b_about->setObjectName(QStringLiteral("b_about"));
        b_about->setStyleSheet(QLatin1String("QPushButton:disabled { color:gray} \n"
"QPushButton { padding: 10px;width: 100%;color:white;background: '#1d1b29'; margin:0px;\n"
"text-align:left; border:none;outline:none } \n"
"QPushButton:hover{ background: '#1e2b35'} QPushButton:checked{ background: '#1e2b35'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }"));
        b_about->setCheckable(true);

        verticalLayout_3->addWidget(b_about);

        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background:#1d1b29"));

        verticalLayout_3->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        stackedWidget = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Settings);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", 0));
        label->setText(QApplication::translate("Settings", "Settings", 0));
        b_backupWallet->setText(QApplication::translate("Settings", "BACKUP WALLET", 0));
        b_export->setText(QApplication::translate("Settings", "EXPORT", 0));
        b_sign->setText(QApplication::translate("Settings", "SIGN MESSAGE", 0));
        b_verify->setText(QApplication::translate("Settings", "VERIFY", 0));
        b_encrypt->setText(QApplication::translate("Settings", "ENCRYPT WALLET", 0));
        b_change->setText(QApplication::translate("Settings", "CHANGE PASSPHRASE", 0));
        b_options->setText(QApplication::translate("Settings", "OPTIONS", 0));
        b_console->setText(QApplication::translate("Settings", "CONSOLE", 0));
        b_about->setText(QApplication::translate("Settings", "ABOUT", 0));
#ifndef QT_NO_TOOLTIP
        stackedWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
