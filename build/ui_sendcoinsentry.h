/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *p;
    QLabel *label_2;
    QValidatedLineEdit *payTo;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QValidatedLineEdit *addAsLabel;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    BitcoinAmountField *payAmount;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *addressBookButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *pasteButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *deleteButton;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QStringLiteral("SendCoinsEntry"));
        SendCoinsEntry->resize(817, 136);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SendCoinsEntry->sizePolicy().hasHeightForWidth());
        SendCoinsEntry->setSizePolicy(sizePolicy);
        SendCoinsEntry->setMinimumSize(QSize(0, 136));
        SendCoinsEntry->setStyleSheet(QLatin1String("border:0px;\n"
" background:'#0a2634';"));
        SendCoinsEntry->setFrameShape(QFrame::StyledPanel);
        SendCoinsEntry->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(SendCoinsEntry);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(13, 5, 801, 131));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        p = new QVBoxLayout();
        p->setObjectName(QStringLiteral("p"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QStringLiteral("color:white"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        p->addWidget(label_2);

        payTo = new QValidatedLineEdit(horizontalLayoutWidget);
        payTo->setObjectName(QStringLiteral("payTo"));
        payTo->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        payTo->setMaxLength(34);

        p->addWidget(payTo);


        verticalLayout->addLayout(p);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QStringLiteral("color:white"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_4);

        addAsLabel = new QValidatedLineEdit(horizontalLayoutWidget);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));
        addAsLabel->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));

        verticalLayout_4->addWidget(addAsLabel);


        verticalLayout->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QStringLiteral("color:white"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        payAmount = new BitcoinAmountField(horizontalLayoutWidget);
        payAmount->setObjectName(QStringLiteral("payAmount"));
        sizePolicy1.setHeightForWidth(payAmount->sizePolicy().hasHeightForWidth());
        payAmount->setSizePolicy(sizePolicy1);
        payAmount->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-top-left-radius:5px;border-bottom-left-radius:5px;"));

        verticalLayout_3->addWidget(payAmount);


        verticalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        addressBookButton = new QToolButton(horizontalLayoutWidget);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setStyleSheet(QLatin1String("QToolButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"	padding:10px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"   background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QToolButton:focus:pressed { \n"
"    background: \"#003750\";\n"
"	border:1px solid #0adbf0;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:focus { \n"
"   background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QToolButton:hover {\n"
"     background-color: \"#002d3f\";\n"
"	border:1px solid #0adbf0;\n"
" }\n"
"QToolButton:checked { \n"
"     background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:disabled { \n"
"    background:'#0a2634';\n"
"color:gray;\n"
"border:1px solid gray;\n"
" }\n"
""));

        horizontalLayout_2->addWidget(addressBookButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pasteButton = new QToolButton(horizontalLayoutWidget);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        pasteButton->setStyleSheet(QLatin1String("QToolButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"	padding:10px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"   background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QToolButton:focus:pressed { \n"
"    background: \"#003750\";\n"
"	border:1px solid #0adbf0;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:focus { \n"
"   background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QToolButton:hover {\n"
"     background-color: \"#002d3f\";\n"
"	border:1px solid #0adbf0;\n"
" }\n"
"QToolButton:checked { \n"
"     background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:disabled { \n"
"    background:'#0a2634';\n"
"color:gray;\n"
"border:1px solid gray;\n"
" }\n"
""));

        horizontalLayout_2->addWidget(pasteButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        deleteButton = new QToolButton(horizontalLayoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setStyleSheet(QLatin1String("QToolButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"	padding:10px;\n"
"\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"   background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QToolButton:focus:pressed { \n"
"    background: \"#003750\";\n"
"	border:1px solid #0adbf0;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:focus { \n"
"   background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QToolButton:hover {\n"
"     background-color: \"#002d3f\";\n"
"	border:1px solid #0adbf0;\n"
" }\n"
"QToolButton:checked { \n"
"     background-color: \"#002d3f\";\n"
"border:1px solid gray;\n"
"	color:white;\n"
"\n"
" }\n"
"QToolButton:disabled { \n"
"    background:'#0a2634';\n"
"color:gray;\n"
"border:1px solid gray;\n"
" }\n"
""));

        horizontalLayout_2->addWidget(deleteButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget->raise();
        addressBookButton->raise();
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(payTo);
        label_4->setBuddy(addAsLabel);
        label->setBuddy(payAmount);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
        SendCoinsEntry->setWindowTitle(QApplication::translate("SendCoinsEntry", "Form", 0));
        label_2->setText(QApplication::translate("SendCoinsEntry", "Pay &To:", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to (e.g. DPpauUHW4ksipzUQhKKVAxscM6UonAAjhX)", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SendCoinsEntry", "&Label:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QApplication::translate("SendCoinsEntry", "Address Book", 0));
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QApplication::translate("SendCoinsEntry", "Paste", 0));
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("SendCoinsEntry", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
