/********************************************************************************
** Form generated from reading UI file 'addressbookpage_3.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_3_H
#define UI_ADDRESSBOOKPAGE_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *recieveTop;
    QPushButton *pushButton;
    QLabel *label_9;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *newAddressButton;
    QPushButton *copyToClipboard;
    QPushButton *showQRCode;
    QPushButton *signMessage;
    QPushButton *verifyMessage;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QStringLiteral("AddressBookPage"));
        AddressBookPage->resize(963, 478);
        AddressBookPage->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        recieveTop = new QWidget(AddressBookPage);
        recieveTop->setObjectName(QStringLiteral("recieveTop"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recieveTop->sizePolicy().hasHeightForWidth());
        recieveTop->setSizePolicy(sizePolicy);
        recieveTop->setMinimumSize(QSize(131, 100));
        recieveTop->setStyleSheet(QStringLiteral("background:'#0a2634';"));
        pushButton = new QPushButton(recieveTop);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 131, 110));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(131, 110));
        pushButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/recieve.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"outline: none;\n"
"background-color:'#003750';"));
        label_9 = new QLabel(recieveTop);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 120, 131, 101));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setStyleSheet(QLatin1String("background:'#003750';margin-top:5px;\n"
"margin-bottom:20px;\n"
"color:white;\n"
"border:0px"));
        label_9->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_9->setMargin(0);
        verticalLayoutWidget = new QWidget(recieveTop);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(129, -1, 815, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        newAddressButton = new QPushButton(verticalLayoutWidget);
        newAddressButton->setObjectName(QStringLiteral("newAddressButton"));
        newAddressButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"	padding:10px;\n"
"margin-top:13px;\n"
"margin-bottom:13px;\n"
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

        horizontalLayout->addWidget(newAddressButton);

        copyToClipboard = new QPushButton(verticalLayoutWidget);
        copyToClipboard->setObjectName(QStringLiteral("copyToClipboard"));
        copyToClipboard->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout->addWidget(copyToClipboard);

        showQRCode = new QPushButton(verticalLayoutWidget);
        showQRCode->setObjectName(QStringLiteral("showQRCode"));
        showQRCode->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout->addWidget(showQRCode);

        signMessage = new QPushButton(verticalLayoutWidget);
        signMessage->setObjectName(QStringLiteral("signMessage"));
        signMessage->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout->addWidget(signMessage);

        verifyMessage = new QPushButton(verticalLayoutWidget);
        verifyMessage->setObjectName(QStringLiteral("verifyMessage"));
        verifyMessage->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout->addWidget(verifyMessage);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
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
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(recieveTop);

        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setStyleSheet(QStringLiteral("background:'#003750';color:white"));
        tableView->setTabKeyNavigation(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        AddressBookPage->setWindowTitle(QApplication::translate("AddressBookPage", "Address Book", 0));
        pushButton->setText(QString());
        label_9->setText(QApplication::translate("AddressBookPage", "Recieve", 0));
#ifndef QT_NO_TOOLTIP
        newAddressButton->setToolTip(QApplication::translate("AddressBookPage", "Create a new address", 0));
#endif // QT_NO_TOOLTIP
        newAddressButton->setText(QApplication::translate("AddressBookPage", "&New Address", 0));
#ifndef QT_NO_TOOLTIP
        copyToClipboard->setToolTip(QApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyToClipboard->setText(QApplication::translate("AddressBookPage", "&Copy Address", 0));
        showQRCode->setText(QApplication::translate("AddressBookPage", "Show &QR Code", 0));
#ifndef QT_NO_TOOLTIP
        signMessage->setToolTip(QApplication::translate("AddressBookPage", "Sign a message to prove you own a Shard address", 0));
#endif // QT_NO_TOOLTIP
        signMessage->setText(QApplication::translate("AddressBookPage", "Sign &Message", 0));
#ifndef QT_NO_TOOLTIP
        verifyMessage->setToolTip(QApplication::translate("AddressBookPage", "Verify a message to ensure it was signed with a specified Shard address", 0));
#endif // QT_NO_TOOLTIP
        verifyMessage->setText(QApplication::translate("AddressBookPage", "&Verify Message", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("AddressBookPage", "Delete the currently selected address from the list", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("AddressBookPage", "&Delete", 0));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("AddressBookPage", "Double-click to edit address or label", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_3_H
