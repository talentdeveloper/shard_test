/********************************************************************************
** Form generated from reading UI file 'askpassphrasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSPHRASEDIALOG_H
#define UI_ASKPASSPHRASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskPassphraseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QCheckBox *stakingCheckBox;
    QLabel *capsLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskPassphraseDialog)
    {
        if (AskPassphraseDialog->objectName().isEmpty())
            AskPassphraseDialog->setObjectName(QStringLiteral("AskPassphraseDialog"));
        AskPassphraseDialog->resize(598, 210);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassphraseDialog->sizePolicy().hasHeightForWidth());
        AskPassphraseDialog->setSizePolicy(sizePolicy);
        AskPassphraseDialog->setMinimumSize(QSize(550, 0));
        AskPassphraseDialog->setStyleSheet(QStringLiteral("background:'#0a2634';color:white"));
        verticalLayout = new QVBoxLayout(AskPassphraseDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        warningLabel = new QLabel(AskPassphraseDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setStyleSheet(QStringLiteral("color:white"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        passLabel1 = new QLabel(AskPassphraseDialog);
        passLabel1->setObjectName(QStringLiteral("passLabel1"));
        passLabel1->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(AskPassphraseDialog);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(AskPassphraseDialog);
        passLabel2->setObjectName(QStringLiteral("passLabel2"));
        passLabel2->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(AskPassphraseDialog);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(AskPassphraseDialog);
        passLabel3->setObjectName(QStringLiteral("passLabel3"));
        passLabel3->setStyleSheet(QStringLiteral("color:white"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(AskPassphraseDialog);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        stakingCheckBox = new QCheckBox(AskPassphraseDialog);
        stakingCheckBox->setObjectName(QStringLiteral("stakingCheckBox"));
        stakingCheckBox->setEnabled(true);
        stakingCheckBox->setVisible(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, stakingCheckBox);

        capsLabel = new QLabel(AskPassphraseDialog);
        capsLabel->setObjectName(QStringLiteral("capsLabel"));
        capsLabel->setStyleSheet(QStringLiteral("color:red"));

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(AskPassphraseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"	padding:10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QPushButton:focus:pressed { \n"
"    background: \"#003750\";\n"
"	border:1px solid #0adbf0;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:focus { \n"
"   background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"     background-color: \"#002d3f\";\n"
"	border:1px solid #0adbf0;\n"
" }\n"
"QPushButton:checked { \n"
"     background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#0a2634';\n"
"color:gray;\n"
"border:1px solid gray;\n"
" }\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AskPassphraseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPassphraseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPassphraseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassphraseDialog)
    {
        AskPassphraseDialog->setWindowTitle(QApplication::translate("AskPassphraseDialog", "Passphrase Dialog", 0));
        passLabel1->setText(QApplication::translate("AskPassphraseDialog", "Enter passphrase", 0));
        passLabel2->setText(QApplication::translate("AskPassphraseDialog", "New passphrase", 0));
        passLabel3->setText(QApplication::translate("AskPassphraseDialog", "Repeat new passphrase", 0));
#ifndef QT_NO_TOOLTIP
        stakingCheckBox->setToolTip(QApplication::translate("AskPassphraseDialog", "Serves to disable the trivial sendmoney when OS account compromised. Provides no real security.", 0));
#endif // QT_NO_TOOLTIP
        stakingCheckBox->setText(QApplication::translate("AskPassphraseDialog", "For staking only", 0));
        capsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AskPassphraseDialog: public Ui_AskPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSPHRASEDIALOG_H
