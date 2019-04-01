/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "listtransactions.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QWidget *ui_transactions;
    QLabel *label_3;
    QLabel *m_price;
    QComboBox *changeTime;
    QComboBox *graphSelector;
    QLabel *label_11;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *graphView;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *m_cap;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QLabel *m_change;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLabel *m_volume;
    QFrame *line;
    QVBoxLayout *verticalLayout_6;
    QWidget *ui_graph;
    ListTransactions *listTransactions;
    QPushButton *moreButton;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QPushButton *ui_recieve;
    QLabel *label_9;
    QGroupBox *groupBox_5;
    QLabel *label_7;
    QLabel *labelUnconfirmed;
    QGroupBox *groupBox;
    QPushButton *ui_send;
    QLabel *label;
    QGroupBox *groupBox_4;
    QLabel *label_5;
    QLabel *labelBalance;
    QGroupBox *groupBox_6;
    QLabel *label_8;
    QLabel *labelStake;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(860, 629);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        horizontalLayoutWidget_2 = new QWidget(OverviewPage);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(-1, 149, 861, 481));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        ui_transactions = new QWidget(horizontalLayoutWidget_2);
        ui_transactions->setObjectName(QStringLiteral("ui_transactions"));
        ui_transactions->setEnabled(true);
        ui_transactions->setStyleSheet(QLatin1String("background:'#102537';\n"
"margin-top:10px;"));
        label_3 = new QLabel(ui_transactions);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 101, 21));
        label_3->setStyleSheet(QStringLiteral("color:\"#0adbf0\";font-weight:bold;"));
        m_price = new QLabel(ui_transactions);
        m_price->setObjectName(QStringLiteral("m_price"));
        m_price->setGeometry(QRect(230, 70, 181, 21));
        m_price->setStyleSheet(QStringLiteral("color:WHITE"));
        m_price->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        changeTime = new QComboBox(ui_transactions);
        changeTime->setObjectName(QStringLiteral("changeTime"));
        changeTime->setGeometry(QRect(310, 10, 101, 41));
        changeTime->setStyleSheet(QLatin1String("QComboBox#changeTime {\n"
"    background:\"#0b1d2c\";\n"
"    border:0px;\n"
"    color:white;\n"
"    outline: none;\n"
"    padding-left:5px;\n"
"   }\n"
"   QComboBox::drop-down {\n"
"    \n"
"        border:0px;\n"
"        margin-right:10px;\n"
"\n"
"    }\n"
"    QComboBox::down-arrow {\n"
"        image: url(\":/images/res/images/dropdown.png\");\n"
"    }\n"
"    QComboBox#changeTime:pressed {\n"
"        background: \"#0b1d2c\"; \n"
"    }\n"
"    QComboBox#changeTime:focus:pressed {\n"
"        background: \"#003750\";\n"
"     }\n"
"    QComboBox#changeTime:focus { \n"
"        background: \"#0b1d2c\"; \n"
"    }\n"
"    QComboBox#changeTime:hover {\n"
"         background: \"#003750\";\n"
"    }\n"
"\n"
"    QComboBox#changeTime:checked { \n"
"       background: \"#0b1d2c\";\n"
"    }\n"
"    QComboBox#changeTime:checked:hover {\n"
"        background: \"#002d3\";\"\n"
" }\n"
"QComboBox#changeTime:disabled { \n"
"    background: \"#0a2634\";\n"
"	color:gray;\n"
" }\n"
"    "));
        graphSelector = new QComboBox(ui_transactions);
        graphSelector->setObjectName(QStringLiteral("graphSelector"));
        graphSelector->setGeometry(QRect(50, 10, 161, 41));
        graphSelector->setStyleSheet(QLatin1String("QComboBox {\n"
"    background:\"#0a2634\";\n"
"    border:0px;\n"
"    color:white;\n"
"    outline: none;\n"
"    padding-left:5px;\n"
"	font-size:20px;\n"
"   }\n"
"   QComboBox::drop-down {\n"
"    \n"
"        border:0px;\n"
"        margin-right:10px;\n"
"\n"
"    }\n"
"    QComboBox::down-arrow {\n"
"        image: url(\":/images/res/images/dropdown.png\");\n"
"    }\n"
"    QComboBox:pressed {\n"
"        background: \"#0b1d2c\"; \n"
"    }\n"
"    QComboBox:focus:pressed {\n"
"        background: \"#003750\";\n"
"     }\n"
"    QComboBox#changeTime:focus { \n"
"        background: \"#0b1d2c\"; \n"
"    }\n"
"    QComboBox:hover {\n"
"         background: \"#003750\";\n"
"    }\n"
"\n"
"    QComboBox:checked { \n"
"       background: \"#0b1d2c\";\n"
"    }\n"
"    QComboBox:checked:hover {\n"
"        background: \"#002d3\";\n"
" }\n"
"QComboBox:disabled { \n"
"    background: \"#0a2634\";\n"
"	color:gray;\n"
" }\n"
"    "));
        label_11 = new QLabel(ui_transactions);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 10, 41, 41));
        verticalLayoutWidget = new QWidget(ui_transactions);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 100, 401, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        graphView = new QCustomPlot(verticalLayoutWidget);
        graphView->setObjectName(QStringLiteral("graphView"));
        sizePolicy.setHeightForWidth(graphView->sizePolicy().hasHeightForWidth());
        graphView->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(graphView);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));

        verticalLayout->addLayout(verticalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color:gray"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_5->addWidget(label_4);

        m_cap = new QLabel(verticalLayoutWidget);
        m_cap->setObjectName(QStringLiteral("m_cap"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_cap->sizePolicy().hasHeightForWidth());
        m_cap->setSizePolicy(sizePolicy1);
        m_cap->setStyleSheet(QStringLiteral("color:white;margin-top:-4px;"));
        m_cap->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(m_cap);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color:gray"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_6);

        m_change = new QLabel(verticalLayoutWidget);
        m_change->setObjectName(QStringLiteral("m_change"));
        sizePolicy1.setHeightForWidth(m_change->sizePolicy().hasHeightForWidth());
        m_change->setSizePolicy(sizePolicy1);
        m_change->setStyleSheet(QStringLiteral("color:white;margin-top:-4px;"));
        m_change->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(m_change);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("color:gray"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_10);

        m_volume = new QLabel(verticalLayoutWidget);
        m_volume->setObjectName(QStringLiteral("m_volume"));
        sizePolicy1.setHeightForWidth(m_volume->sizePolicy().hasHeightForWidth());
        m_volume->setSizePolicy(sizePolicy1);
        m_volume->setStyleSheet(QStringLiteral("color:white;margin-top:-4px;"));
        m_volume->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(m_volume);


        horizontalLayout->addLayout(verticalLayout_10);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(ui_transactions);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-10, 56, 441, 20));
        line->setStyleSheet(QStringLiteral("color:'#0b1d2c';"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_7->addWidget(ui_transactions);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        ui_graph = new QWidget(horizontalLayoutWidget_2);
        ui_graph->setObjectName(QStringLiteral("ui_graph"));
        ui_graph->setStyleSheet(QLatin1String("background:'#102537';\n"
"margin-top:10px;"));
        listTransactions = new ListTransactions(ui_graph);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setGeometry(QRect(0, 60, 412, 411));
        listTransactions->setStyleSheet(QStringLiteral("padding:5px;border:0px"));
        moreButton = new QPushButton(ui_graph);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setGeometry(QRect(330, 10, 81, 41));
        moreButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0b1d2c\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: \"#0b1d2c\";\n"
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
"   background-color: \"#0b1d2c\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"     background-color: \"#0b1d2c\";\n"
"	border:1px solid #0adbf0;\n"
" }\n"
"QPushButton:checked { \n"
"     background-color: \"#0b1d2c\";\n"
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
        moreButton->setFlat(false);
        label_2 = new QLabel(ui_graph);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 221, 41));
        label_2->setStyleSheet(QLatin1String("color:white;\n"
"font-size:18px;"));
        label_2->setTextFormat(Qt::RichText);

        verticalLayout_6->addWidget(ui_graph);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalLayoutWidget_3 = new QWidget(OverviewPage);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, -1, 861, 151));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(horizontalLayoutWidget_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        groupBox_3->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 131, 151));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setStyleSheet(QStringLiteral("background:'#0e2232';border:0px"));
        ui_recieve = new QPushButton(groupBox_2);
        ui_recieve->setObjectName(QStringLiteral("ui_recieve"));
        ui_recieve->setGeometry(QRect(0, 0, 131, 131));
        sizePolicy2.setHeightForWidth(ui_recieve->sizePolicy().hasHeightForWidth());
        ui_recieve->setSizePolicy(sizePolicy2);
        ui_recieve->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/recieve.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"outline: none;\n"
""));
        ui_recieve->setAutoExclusive(false);
        ui_recieve->setFlat(false);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 110, 131, 41));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setStyleSheet(QLatin1String("margin-top:5px;\n"
"margin-bottom:20px;\n"
"color:white;\n"
"border:0px"));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setMargin(0);
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(590, 0, 141, 141));
        groupBox_5->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 40, 131, 20));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setStyleSheet(QLatin1String("color:white;\n"
"font-size:10px"));
        label_7->setAlignment(Qt::AlignCenter);
        labelUnconfirmed = new QLabel(groupBox_5);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setGeometry(QRect(0, 60, 131, 41));
        labelUnconfirmed->setStyleSheet(QStringLiteral("color:white;"));
        labelUnconfirmed->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(730, 0, 131, 151));
        groupBox->setStyleSheet(QStringLiteral("background:'#0e2232';border:0px"));
        ui_send = new QPushButton(groupBox);
        ui_send->setObjectName(QStringLiteral("ui_send"));
        ui_send->setGeometry(QRect(0, 0, 131, 131));
        sizePolicy2.setHeightForWidth(ui_send->sizePolicy().hasHeightForWidth());
        ui_send->setSizePolicy(sizePolicy2);
        ui_send->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/send.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"outline:none;"));
        ui_send->setAutoExclusive(false);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 110, 131, 41));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setStyleSheet(QLatin1String("margin-top:5px;\n"
"margin-bottom:20px;\n"
"color:white;\n"
"border:0px"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(270, 0, 321, 141));
        groupBox_4->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 30, 321, 20));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_5->setAlignment(Qt::AlignCenter);
        labelBalance = new QLabel(groupBox_4);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setGeometry(QRect(6, 50, 311, 61));
        labelBalance->setStyleSheet(QStringLiteral("color:white;"));
        labelBalance->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(140, 0, 131, 141));
        groupBox_6->setStyleSheet(QStringLiteral("background:'#102537';border:0px"));
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 40, 131, 20));
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setStyleSheet(QLatin1String("color:white;\n"
"font-size:10px"));
        label_8->setAlignment(Qt::AlignCenter);
        labelStake = new QLabel(groupBox_6);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        labelStake->setGeometry(QRect(16, 60, 121, 41));
        labelStake->setStyleSheet(QStringLiteral("color:white;"));
        labelStake->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(groupBox_3);

        QWidget::setTabOrder(moreButton, listTransactions);
        QWidget::setTabOrder(listTransactions, ui_recieve);
        QWidget::setTabOrder(ui_recieve, ui_send);

        retranslateUi(OverviewPage);

        changeTime->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        label_3->setText(QApplication::translate("OverviewPage", "SHARD/USD", 0));
        m_price->setText(QApplication::translate("OverviewPage", "$ 0.00 / SHARD", 0));
        changeTime->setCurrentText(QString());
        label_11->setText(QApplication::translate("OverviewPage", "<img src=\":/images/res/images/graph.png\">", 0));
        label_4->setText(QApplication::translate("OverviewPage", "MCAP:", 0));
        m_cap->setText(QApplication::translate("OverviewPage", "0.00 $", 0));
        label_6->setText(QApplication::translate("OverviewPage", "Change (24h):", 0));
        m_change->setText(QApplication::translate("OverviewPage", "0.00 $", 0));
        label_10->setText(QApplication::translate("OverviewPage", "Volume (24h):", 0));
        m_volume->setText(QApplication::translate("OverviewPage", "0.00 $", 0));
        moreButton->setText(QApplication::translate("OverviewPage", "MORE", 0));
        label_2->setText(QApplication::translate("OverviewPage", "<img src=\":/images/res/images/transactions.png\">&nbsp;&nbsp;&nbsp;&nbsp;List Transactions", 0));
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QString());
        ui_recieve->setText(QString());
        label_9->setText(QApplication::translate("OverviewPage", "Recieve", 0));
        groupBox_5->setTitle(QString());
        label_7->setText(QApplication::translate("OverviewPage", "UNCONFIRMED", 0));
        labelUnconfirmed->setText(QApplication::translate("OverviewPage", "0", 0));
        groupBox->setTitle(QString());
        ui_send->setText(QString());
        label->setText(QApplication::translate("OverviewPage", "Send", 0));
        groupBox_4->setTitle(QString());
        label_5->setText(QApplication::translate("OverviewPage", "BALANCE", 0));
        labelBalance->setText(QApplication::translate("OverviewPage", "0", 0));
        groupBox_6->setTitle(QString());
        label_8->setText(QApplication::translate("OverviewPage", "STAKED", 0));
        labelStake->setText(QApplication::translate("OverviewPage", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
