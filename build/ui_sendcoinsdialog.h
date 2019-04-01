/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QPushButton *sendButton;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QPushButton *clearButton;
    QLabel *label_2;
    QLabel *labelBalance;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelCoinControlInsuffFunds;
    QLabel *labelCoinControlAutomaticallySelected;
    QPushButton *pushButtonCoinControl;
    QWidget *widgetCoinControl;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QSpacerItem *horizontalSpacer;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *splitBlockCheckBox;
    QLineEdit *splitBlockLineEdit;
    QLabel *labelBlockSizeText;
    QLabel *labelBlockSize;
    QLabel *labelCoinControlChangeLabel;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxCoinControlChange;
    QLineEdit *lineEditCoinControlChange;
    QSpacerItem *verticalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QPushButton *addButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QStringLiteral("SendCoinsDialog"));
        SendCoinsDialog->setEnabled(true);
        SendCoinsDialog->resize(860, 628);
        SendCoinsDialog->setStyleSheet(QStringLiteral(""));
        gridLayoutWidget = new QWidget(SendCoinsDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 841, 153));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(gridLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setMinimumSize(QSize(131, 151));
        groupBox->setMaximumSize(QSize(131, 151));
        groupBox->setCursor(QCursor(Qt::ArrowCursor));
        groupBox->setMouseTracking(true);
        groupBox->setStyleSheet(QStringLiteral("background:#003750"));
        groupBox->setCheckable(false);
        sendButton = new QPushButton(groupBox);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(0, 20, 131, 81));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        sendButton->setMaximumSize(QSize(16777215, 16777215));
        sendButton->setCursor(QCursor(Qt::PointingHandCursor));
        sendButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/recieve.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"outline: none;\n"
""));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 100, 131, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setStyleSheet(QStringLiteral("color:white"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->raise();
        sendButton->raise();

        gridLayout->addWidget(groupBox, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(gridLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(131, 0));
        groupBox_2->setMaximumSize(QSize(131, 16777215));
        groupBox_2->setStyleSheet(QLatin1String("border:1px solid '#97c8e0';\n"
"border-top:0px;\n"
"border-bottom:0px;\n"
"border-left:0px;\n"
"background:'#0a2634';"));
        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(10, 80, 109, 39));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setMinimumSize(QSize(109, 0));
        clearButton->setMaximumSize(QSize(109, 16777215));
        clearButton->setStyleSheet(QLatin1String("QPushButton { \n"
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
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 109, 17));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setMinimumSize(QSize(109, 0));
        label_2->setMaximumSize(QSize(109, 16777215));
        label_2->setStyleSheet(QStringLiteral("color:white;border:0px"));
        label_2->setAlignment(Qt::AlignCenter);
        labelBalance = new QLabel(groupBox_2);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setGeometry(QRect(10, 50, 109, 17));
        sizePolicy2.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy2);
        labelBalance->setMinimumSize(QSize(109, 0));
        labelBalance->setMaximumSize(QSize(109, 16777215));
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setStyleSheet(QStringLiteral("color:white;border:0px"));
        labelBalance->setText(QStringLiteral("123.456 SHARD"));
        labelBalance->setAlignment(Qt::AlignCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(gridLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("background:'#0a2634'"));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 581, 151));
        verticalLayoutCoinControl = new QVBoxLayout(layoutWidget);
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QStringLiteral("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(10, 5, 10, 0);
        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QStringLiteral("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(6, 6, 6, 6);
        labelCoinControlAmountText = new QLabel(layoutWidget);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        sizePolicy1.setHeightForWidth(labelCoinControlAmountText->sizePolicy().hasHeightForWidth());
        labelCoinControlAmountText->setSizePolicy(sizePolicy1);
        labelCoinControlAmountText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;margin-right:5px;"));
        labelCoinControlAmountText->setMargin(0);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(layoutWidget);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        sizePolicy1.setHeightForWidth(labelCoinControlAmount->sizePolicy().hasHeightForWidth());
        labelCoinControlAmount->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(10);
        labelCoinControlAmount->setFont(font);
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setStyleSheet(QStringLiteral("color:white;margin-right:15px"));
        labelCoinControlAmount->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAmount);

        labelCoinControlFeeText = new QLabel(layoutWidget);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        sizePolicy1.setHeightForWidth(labelCoinControlFeeText->sizePolicy().hasHeightForWidth());
        labelCoinControlFeeText->setSizePolicy(sizePolicy1);
        labelCoinControlFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;margin-right:5px;"));
        labelCoinControlFeeText->setMargin(0);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(layoutWidget);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        sizePolicy1.setHeightForWidth(labelCoinControlFee->sizePolicy().hasHeightForWidth());
        labelCoinControlFee->setSizePolicy(sizePolicy1);
        labelCoinControlFee->setFont(font);
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setStyleSheet(QStringLiteral("color:white"));
        labelCoinControlFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlFee);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacer_2);

        labelCoinControlInsuffFunds = new QLabel(layoutWidget);
        labelCoinControlInsuffFunds->setObjectName(QStringLiteral("labelCoinControlInsuffFunds"));
        sizePolicy1.setHeightForWidth(labelCoinControlInsuffFunds->sizePolicy().hasHeightForWidth());
        labelCoinControlInsuffFunds->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelCoinControlInsuffFunds->setFont(font1);
        labelCoinControlInsuffFunds->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        labelCoinControlAutomaticallySelected = new QLabel(layoutWidget);
        labelCoinControlAutomaticallySelected->setObjectName(QStringLiteral("labelCoinControlAutomaticallySelected"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCoinControlAutomaticallySelected->sizePolicy().hasHeightForWidth());
        labelCoinControlAutomaticallySelected->setSizePolicy(sizePolicy4);
        labelCoinControlAutomaticallySelected->setMaximumSize(QSize(164, 16777215));
        labelCoinControlAutomaticallySelected->setStyleSheet(QStringLiteral(";color:white"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        pushButtonCoinControl = new QPushButton(layoutWidget);
        pushButtonCoinControl->setObjectName(QStringLiteral("pushButtonCoinControl"));
        sizePolicy3.setHeightForWidth(pushButtonCoinControl->sizePolicy().hasHeightForWidth());
        pushButtonCoinControl->setSizePolicy(sizePolicy3);
        pushButtonCoinControl->setMaximumSize(QSize(76, 16777215));
        pushButtonCoinControl->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(layoutWidget);
        widgetCoinControl->setObjectName(QStringLiteral("widgetCoinControl"));
        verticalLayout_6 = new QVBoxLayout(widgetCoinControl);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(1, 1, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 0, 6, 0);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        sizePolicy2.setHeightForWidth(labelCoinControlQuantityText->sizePolicy().hasHeightForWidth());
        labelCoinControlQuantityText->setSizePolicy(sizePolicy2);
        labelCoinControlQuantityText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;margin-right:5px;"));
        labelCoinControlQuantityText->setMargin(0);

        horizontalLayout_2->addWidget(labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelCoinControlQuantity->sizePolicy().hasHeightForWidth());
        labelCoinControlQuantity->setSizePolicy(sizePolicy5);
        labelCoinControlQuantity->setFont(font);
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setStyleSheet(QStringLiteral("color:white"));
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelCoinControlQuantity);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        sizePolicy2.setHeightForWidth(labelCoinControlChangeText->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeText->setSizePolicy(sizePolicy2);
        labelCoinControlChangeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;margin-right:5px;"));

        horizontalLayout_2->addWidget(labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelCoinControlChange->sizePolicy().hasHeightForWidth());
        labelCoinControlChange->setSizePolicy(sizePolicy6);
        labelCoinControlChange->setFont(font);
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setStyleSheet(QStringLiteral("color:white"));
        labelCoinControlChange->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelCoinControlChange);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        sizePolicy2.setHeightForWidth(labelCoinControlAfterFeeText->sizePolicy().hasHeightForWidth());
        labelCoinControlAfterFeeText->setSizePolicy(sizePolicy2);
        labelCoinControlAfterFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;margin-right:5px;"));
        labelCoinControlAfterFeeText->setMargin(0);

        horizontalLayout_2->addWidget(labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        sizePolicy6.setHeightForWidth(labelCoinControlAfterFee->sizePolicy().hasHeightForWidth());
        labelCoinControlAfterFee->setSizePolicy(sizePolicy6);
        labelCoinControlAfterFee->setFont(font);
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setStyleSheet(QStringLiteral("color:white"));
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelCoinControlAfterFee);


        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName(QStringLiteral("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(6, 5, 6, -1);
        splitBlockCheckBox = new QCheckBox(layoutWidget);
        splitBlockCheckBox->setObjectName(QStringLiteral("splitBlockCheckBox"));
        splitBlockCheckBox->setStyleSheet(QStringLiteral("color:white"));

        horizontalLayoutCoinControl4->addWidget(splitBlockCheckBox);

        splitBlockLineEdit = new QLineEdit(layoutWidget);
        splitBlockLineEdit->setObjectName(QStringLiteral("splitBlockLineEdit"));
        splitBlockLineEdit->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(splitBlockLineEdit->sizePolicy().hasHeightForWidth());
        splitBlockLineEdit->setSizePolicy(sizePolicy7);
        splitBlockLineEdit->setMaximumSize(QSize(16777215, 16777215));
        splitBlockLineEdit->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));

        horizontalLayoutCoinControl4->addWidget(splitBlockLineEdit);

        labelBlockSizeText = new QLabel(layoutWidget);
        labelBlockSizeText->setObjectName(QStringLiteral("labelBlockSizeText"));
        labelBlockSizeText->setEnabled(false);
        labelBlockSizeText->setFont(font1);

        horizontalLayoutCoinControl4->addWidget(labelBlockSizeText);

        labelBlockSize = new QLabel(layoutWidget);
        labelBlockSize->setObjectName(QStringLiteral("labelBlockSize"));
        labelBlockSize->setEnabled(false);
        sizePolicy2.setHeightForWidth(labelBlockSize->sizePolicy().hasHeightForWidth());
        labelBlockSize->setSizePolicy(sizePolicy2);

        horizontalLayoutCoinControl4->addWidget(labelBlockSize);

        labelCoinControlChangeLabel = new QLabel(layoutWidget);
        labelCoinControlChangeLabel->setObjectName(QStringLiteral("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy8);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 4, 6, -1);
        checkBoxCoinControlChange = new QCheckBox(layoutWidget);
        checkBoxCoinControlChange->setObjectName(QStringLiteral("checkBoxCoinControlChange"));
        sizePolicy2.setHeightForWidth(checkBoxCoinControlChange->sizePolicy().hasHeightForWidth());
        checkBoxCoinControlChange->setSizePolicy(sizePolicy2);
        checkBoxCoinControlChange->setStyleSheet(QStringLiteral("color:white"));

        horizontalLayout_4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QLineEdit(layoutWidget);
        lineEditCoinControlChange->setObjectName(QStringLiteral("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        sizePolicy7.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy7);
        lineEditCoinControlChange->setMaximumSize(QSize(16777215, 16777215));
        lineEditCoinControlChange->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));

        horizontalLayout_4->addWidget(lineEditCoinControlChange);


        verticalLayoutCoinControl->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCoinControl->addItem(verticalSpacer_2);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 170, 841, 451));
        scrollArea->setStyleSheet(QStringLiteral("border:0px;background:#002d3f"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 841, 451));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("border:0px;"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        entries = new QVBoxLayout();
        entries->setObjectName(QStringLiteral("entries"));

        verticalLayout_2->addLayout(entries);

        addButton = new QPushButton(scrollAreaWidgetContents);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setMinimumSize(QSize(0, 70));
        addButton->setMaximumSize(QSize(16777215, 70));
        addButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position: center;\n"
"background-attachment:fixed;\n"
"background-size:cover;\n"
"outline: none;\n"
"background-color:transparent\n"
""));
        addButton->setAutoDefault(false);

        verticalLayout_2->addWidget(addButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(SendCoinsDialog);

        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", 0));
        groupBox->setTitle(QString());
        sendButton->setText(QString());
        label_4->setText(QApplication::translate("SendCoinsDialog", "Send", 0));
        groupBox_2->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCoinsDialog", "Remove all transaction fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCoinsDialog", "Clear &All", 0));
        label_2->setText(QApplication::translate("SendCoinsDialog", "TOTAL", 0));
        groupBox_3->setTitle(QString());
        labelCoinControlAmountText->setText(QApplication::translate("SendCoinsDialog", "Amount:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("SendCoinsDialog", "Fee:", 0));
        labelCoinControlInsuffFunds->setText(QApplication::translate("SendCoinsDialog", "Insufficient funds!", 0));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("SendCoinsDialog", "automatically selected", 0));
        pushButtonCoinControl->setText(QApplication::translate("SendCoinsDialog", "Inputs...", 0));
        labelCoinControlQuantityText->setText(QApplication::translate("SendCoinsDialog", "Quantity:", 0));
        labelCoinControlQuantity->setText(QApplication::translate("SendCoinsDialog", "0", 0));
        labelCoinControlChangeText->setText(QApplication::translate("SendCoinsDialog", "Change:", 0));
        labelCoinControlAfterFeeText->setText(QApplication::translate("SendCoinsDialog", "After Fee:", 0));
        splitBlockCheckBox->setText(QApplication::translate("SendCoinsDialog", "SplitBlock", 0));
        labelBlockSizeText->setText(QApplication::translate("SendCoinsDialog", "Block Size:", 0));
        labelBlockSize->setText(QApplication::translate("SendCoinsDialog", "0.00 SHARD", 0));
        labelCoinControlChangeLabel->setText(QString());
        checkBoxCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "custom change address", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendCoinsDialog", "Send to multiple recipients at once", 0));
#endif // QT_NO_TOOLTIP
        addButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
