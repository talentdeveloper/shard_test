/********************************************************************************
** Form generated from reading UI file 'overviewpage2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE2_H
#define UI_OVERVIEWPAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QWidget *ui_transactions;
    QVBoxLayout *verticalLayout_6;
    QWidget *ui_graph;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QPushButton *ui_recieve;
    QLabel *label_9;
    QGroupBox *groupBox_5;
    QLabel *label_7;
    QLabel *ui_unconfirmed;
    QGroupBox *groupBox;
    QPushButton *ui_send;
    QLabel *label;
    QGroupBox *groupBox_4;
    QLabel *label_5;
    QLabel *ui_balance;
    QGroupBox *groupBox_6;
    QLabel *label_14;
    QLabel *ui_staked;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(690, 564);
        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 671, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));

        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);

        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayoutWidget_2 = new QWidget(Form);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(9, 149, 671, 411));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        ui_transactions = new QWidget(horizontalLayoutWidget_2);
        ui_transactions->setObjectName(QStringLiteral("ui_transactions"));
        ui_transactions->setStyleSheet(QLatin1String("background:'#0a2634';\n"
"margin-top:6px;"));

        verticalLayout_7->addWidget(ui_transactions);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        ui_graph = new QWidget(horizontalLayoutWidget_2);
        ui_graph->setObjectName(QStringLiteral("ui_graph"));
        ui_graph->setStyleSheet(QLatin1String("background:'#0a2634';\n"
"margin-top:6px;"));

        verticalLayout_6->addWidget(ui_graph);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalLayoutWidget_3 = new QWidget(Form);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 9, 671, 141));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(horizontalLayoutWidget_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setStyleSheet(QStringLiteral("background:'#0a2634'"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 131, 141));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QStringLiteral("background:'#003750'"));
        ui_recieve = new QPushButton(groupBox_2);
        ui_recieve->setObjectName(QStringLiteral("ui_recieve"));
        ui_recieve->setGeometry(QRect(0, -2, 131, 111));
        sizePolicy.setHeightForWidth(ui_recieve->sizePolicy().hasHeightForWidth());
        ui_recieve->setSizePolicy(sizePolicy);
        ui_recieve->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/recieve.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;"));
        ui_recieve->setAutoExclusive(false);
        ui_recieve->setFlat(false);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 90, 131, 47));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setStyleSheet(QLatin1String("margin-top:5px;\n"
"margin-bottom:20px;\n"
"color:white;"));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setMargin(0);
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(441, 0, 101, 141));
        groupBox_5->setStyleSheet(QStringLiteral("background:'#0a2634'"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 91, 20));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setStyleSheet(QLatin1String("color:white;\n"
"font-size:10px"));
        label_7->setAlignment(Qt::AlignCenter);
        ui_unconfirmed = new QLabel(groupBox_5);
        ui_unconfirmed->setObjectName(QStringLiteral("ui_unconfirmed"));
        ui_unconfirmed->setGeometry(QRect(6, 60, 91, 41));
        ui_unconfirmed->setStyleSheet(QLatin1String("font-size:35px;\n"
"color:white;"));
        ui_unconfirmed->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(540, 0, 131, 141));
        groupBox->setStyleSheet(QStringLiteral("background:'#003750'"));
        ui_send = new QPushButton(groupBox);
        ui_send->setObjectName(QStringLiteral("ui_send"));
        ui_send->setGeometry(QRect(0, -2, 131, 111));
        sizePolicy.setHeightForWidth(ui_send->sizePolicy().hasHeightForWidth());
        ui_send->setSizePolicy(sizePolicy);
        ui_send->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/send.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;"));
        ui_send->setAutoExclusive(false);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 90, 131, 47));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QLatin1String("margin-top:5px;\n"
"margin-bottom:20px;\n"
"color:white;"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(230, -4, 231, 141));
        groupBox_4->setStyleSheet(QStringLiteral("background:'#0a2634'"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-10, 30, 231, 20));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_5->setAlignment(Qt::AlignCenter);
        ui_balance = new QLabel(groupBox_4);
        ui_balance->setObjectName(QStringLiteral("ui_balance"));
        ui_balance->setGeometry(QRect(-4, 50, 221, 51));
        ui_balance->setStyleSheet(QLatin1String("font-size:45px;\n"
"color:white;"));
        ui_balance->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(130, 0, 101, 141));
        groupBox_6->setStyleSheet(QStringLiteral("background:'#0a2634'"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 40, 101, 20));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setStyleSheet(QLatin1String("color:white;\n"
"font-size:10px"));
        label_14->setAlignment(Qt::AlignCenter);
        ui_staked = new QLabel(groupBox_6);
        ui_staked->setObjectName(QStringLiteral("ui_staked"));
        ui_staked->setGeometry(QRect(6, 60, 91, 41));
        ui_staked->setStyleSheet(QLatin1String("font-size:35px;\n"
"color:white;"));
        ui_staked->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(groupBox_3);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QString());
        ui_recieve->setText(QString());
        label_9->setText(QApplication::translate("Form", "Recieve", 0));
        groupBox_5->setTitle(QString());
        label_7->setText(QApplication::translate("Form", "UNCONFIRMED", 0));
        ui_unconfirmed->setText(QApplication::translate("Form", "0", 0));
        groupBox->setTitle(QString());
        ui_send->setText(QString());
        label->setText(QApplication::translate("Form", "Send", 0));
        groupBox_4->setTitle(QString());
        label_5->setText(QApplication::translate("Form", "BALANCE", 0));
        ui_balance->setText(QApplication::translate("Form", "0", 0));
        groupBox_6->setTitle(QString());
        label_14->setText(QApplication::translate("Form", "STAKED", 0));
        ui_staked->setText(QApplication::translate("Form", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE2_H
