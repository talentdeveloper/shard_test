/********************************************************************************
** Form generated from reading UI file 'coincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINCONTROLDIALOG_H
#define UI_COINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "coincontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CoinControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutTop;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutPanel;
    QPushButton *pushButtonSelectAll;
    QRadioButton *radioTreeMode;
    QRadioButton *radioListMode;
    QLabel *labelLocked;
    QPushButton *pushButtonCustomCC;
    QComboBox *QComboBoxFilterCoins;
    QLineEdit *lineEditCustomCC;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    CoinControlTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoinControlDialog)
    {
        if (CoinControlDialog->objectName().isEmpty())
            CoinControlDialog->setObjectName(QStringLiteral("CoinControlDialog"));
        CoinControlDialog->resize(1132, 500);
        CoinControlDialog->setStyleSheet(QStringLiteral("background:'#0a2634';"));
        verticalLayout = new QVBoxLayout(CoinControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayoutTop = new QHBoxLayout();
        horizontalLayoutTop->setObjectName(QStringLiteral("horizontalLayoutTop"));
        horizontalLayoutTop->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QStringLiteral("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(10);
        formLayoutCoinControl1->setContentsMargins(6, -1, 6, -1);
        labelCoinControlQuantityText = new QLabel(CoinControlDialog);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(CoinControlDialog);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(10);
        labelCoinControlQuantity->setFont(font);
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        labelCoinControlQuantity->setText(QStringLiteral("0"));
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(CoinControlDialog);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));
        labelCoinControlBytesText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(CoinControlDialog);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));
        labelCoinControlBytes->setFont(font);
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        labelCoinControlBytes->setText(QStringLiteral("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutTop->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(10);
        formLayoutCoinControl2->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAmountText = new QLabel(CoinControlDialog);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        labelCoinControlAmountText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(CoinControlDialog);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        labelCoinControlAmount->setFont(font);
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        labelCoinControlAmount->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);


        horizontalLayoutTop->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(10);
        formLayoutCoinControl3->setContentsMargins(6, -1, 6, -1);
        labelCoinControlFeeText = new QLabel(CoinControlDialog);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(CoinControlDialog);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        labelCoinControlFee->setFont(font);
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        labelCoinControlFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);

        labelCoinControlLowOutputText = new QLabel(CoinControlDialog);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setEnabled(false);
        labelCoinControlLowOutputText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl3->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(CoinControlDialog);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setEnabled(false);
        labelCoinControlLowOutput->setFont(font);
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setText(QStringLiteral("no"));
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutTop->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(10);
        formLayoutCoinControl4->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(CoinControlDialog);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(CoinControlDialog);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setFont(font);
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(CoinControlDialog);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        labelCoinControlChangeText->setEnabled(false);
        labelCoinControlChangeText->setStyleSheet(QStringLiteral("font-weight:bold;color:white;"));

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(CoinControlDialog);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        labelCoinControlChange->setEnabled(false);
        labelCoinControlChange->setFont(font);
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QStringLiteral("0.00 SHARD"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutTop->addLayout(formLayoutCoinControl4);


        verticalLayout->addLayout(horizontalLayoutTop);

        frame = new QFrame(CoinControlDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1111, 41));
        horizontalLayoutPanel = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutPanel->setSpacing(14);
        horizontalLayoutPanel->setObjectName(QStringLiteral("horizontalLayoutPanel"));
        horizontalLayoutPanel->setContentsMargins(0, 0, 0, 0);
        pushButtonSelectAll = new QPushButton(horizontalLayoutWidget);
        pushButtonSelectAll->setObjectName(QStringLiteral("pushButtonSelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSelectAll->sizePolicy().hasHeightForWidth());
        pushButtonSelectAll->setSizePolicy(sizePolicy);
        pushButtonSelectAll->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"padding:7px;\n"
"\n"
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

        horizontalLayoutPanel->addWidget(pushButtonSelectAll);

        radioTreeMode = new QRadioButton(horizontalLayoutWidget);
        radioTreeMode->setObjectName(QStringLiteral("radioTreeMode"));
        sizePolicy.setHeightForWidth(radioTreeMode->sizePolicy().hasHeightForWidth());
        radioTreeMode->setSizePolicy(sizePolicy);
        radioTreeMode->setStyleSheet(QStringLiteral("color:white;"));
        radioTreeMode->setChecked(true);

        horizontalLayoutPanel->addWidget(radioTreeMode);

        radioListMode = new QRadioButton(horizontalLayoutWidget);
        radioListMode->setObjectName(QStringLiteral("radioListMode"));
        sizePolicy.setHeightForWidth(radioListMode->sizePolicy().hasHeightForWidth());
        radioListMode->setSizePolicy(sizePolicy);
        radioListMode->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayoutPanel->addWidget(radioListMode);

        labelLocked = new QLabel(horizontalLayoutWidget);
        labelLocked->setObjectName(QStringLiteral("labelLocked"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLocked->sizePolicy().hasHeightForWidth());
        labelLocked->setSizePolicy(sizePolicy1);
        labelLocked->setStyleSheet(QStringLiteral("color:white;"));
        labelLocked->setText(QStringLiteral("(1 locked)"));

        horizontalLayoutPanel->addWidget(labelLocked);

        pushButtonCustomCC = new QPushButton(horizontalLayoutWidget);
        pushButtonCustomCC->setObjectName(QStringLiteral("pushButtonCustomCC"));
        pushButtonCustomCC->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
"padding:7px;\n"
"\n"
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

        horizontalLayoutPanel->addWidget(pushButtonCustomCC);

        QComboBoxFilterCoins = new QComboBox(horizontalLayoutWidget);
        QComboBoxFilterCoins->setObjectName(QStringLiteral("QComboBoxFilterCoins"));
        QComboBoxFilterCoins->setStyleSheet(QLatin1String("QComboBox {\n"
"    background:\"#002d3f\";\n"
"    border:0px;\n"
"    color:white;\n"
"    outline: none;\n"
"    padding-left:10px;\n"
"	padding-top:5px;\n"
"	padding-bottom:5px;\n"
"	padding-right:45px;\n"
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
"        background: \"#002d3f\"; \n"
"    }\n"
"    QComboBox:focus:pressed {\n"
"        background: \"#003750\";\n"
"     }\n"
"    QComboBox:focus { \n"
"        background: \"#002d3f\"; \n"
"    }\n"
"    QComboBox:hover {\n"
"         background: \"#003750\";\n"
"    }\n"
"\n"
"    QComboBox:checked { \n"
"       background: \"#002d3f\";\n"
"    }\n"
"    QComboBox:checked:hover {\n"
"        background: \"#002d3\";\n"
" }\n"
"QComboBox:disabled { \n"
"    background: \"#0a2634\";\n"
"	color:gray;\n"
" }\n"
"    "));

        horizontalLayoutPanel->addWidget(QComboBoxFilterCoins);

        lineEditCustomCC = new QLineEdit(horizontalLayoutWidget);
        lineEditCustomCC->setObjectName(QStringLiteral("lineEditCustomCC"));
        lineEditCustomCC->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditCustomCC->sizePolicy().hasHeightForWidth());
        lineEditCustomCC->setSizePolicy(sizePolicy2);
        lineEditCustomCC->setBaseSize(QSize(50, 0));
        lineEditCustomCC->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));

        horizontalLayoutPanel->addWidget(lineEditCustomCC);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeWidget = new CoinControlTreeWidget(CoinControlDialog);
        treeWidget->headerItem()->setText(10, QString());
        treeWidget->headerItem()->setText(11, QString());
        treeWidget->headerItem()->setText(12, QString());
        treeWidget->headerItem()->setText(13, QString());
        treeWidget->headerItem()->setText(14, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setStyleSheet(QLatin1String("QTreeWidget {\n"
"    show-decoration-selected: 1;\n"
"border:0px;\n"
"color:white;\n"
"}\n"
"\n"
"QTreeWidget::item {\n"
"     border: 1px solid #002d3f;\n"
"    border-top-color: transparent;\n"
"    border-bottom-color: transparent;\n"
"}\n"
"\n"
"QTreeWidget::item:hover {\n"
"    background: #002d3f;\n"
"   \n"
"}\n"
"\n"
"QTreeWidget::item:selected {\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QTreeWidget::item:selected:active{\n"
"    background: #003750;\n"
"}\n"
"\n"
"QTreeWidget::item:selected:!active {\n"
"    background: #002d3f;\n"
"}\n"
"QHeaderView::section\n"
"    {\n"
"    spacing: 10px;\n"
"    background-color:#002d3f;\n"
"    color: white;\n"
"    padding:5px;\n"
"    font-weight:bold;\n"
"    font-size:12px;\n"
"    border: 0px;\n"
"    text-align: right;\n"
"    font-family: arial;\n"
"    }\n"
"\n"
"QTreeWidget::branch {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:has-siblings:!adjoins-item {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:ha"
                        "s-siblings:adjoins-item {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:!has-children:!has-siblings:adjoins-item {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:closed:has-children:has-siblings {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:has-children:!has-siblings:closed {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:open:has-children:has-siblings {\n"
"        background: #002d3f;\n"
"}\n"
"\n"
"QTreeWidget::branch:open:has-children:!has-siblings {\n"
"        background: #002d3f;\n"
"}"));
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(15);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(treeWidget);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(CoinControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
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
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoinControlDialog);

        QMetaObject::connectSlotsByName(CoinControlDialog);
    } // setupUi

    void retranslateUi(QDialog *CoinControlDialog)
    {
        CoinControlDialog->setWindowTitle(QApplication::translate("CoinControlDialog", "Coin Control", 0));
        labelCoinControlQuantityText->setText(QApplication::translate("CoinControlDialog", "Quantity:", 0));
        labelCoinControlBytesText->setText(QApplication::translate("CoinControlDialog", "Bytes:", 0));
        labelCoinControlAmountText->setText(QApplication::translate("CoinControlDialog", "Amount:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("CoinControlDialog", "Fee:", 0));
        labelCoinControlLowOutputText->setText(QApplication::translate("CoinControlDialog", "Low Output:", 0));
        labelCoinControlAfterFeeText->setText(QApplication::translate("CoinControlDialog", "After Fee:", 0));
        labelCoinControlChangeText->setText(QApplication::translate("CoinControlDialog", "Change:", 0));
        pushButtonSelectAll->setText(QApplication::translate("CoinControlDialog", "(un)select all", 0));
        radioTreeMode->setText(QApplication::translate("CoinControlDialog", "Tree mode", 0));
        radioListMode->setText(QApplication::translate("CoinControlDialog", "List mode", 0));
        pushButtonCustomCC->setText(QApplication::translate("CoinControlDialog", "Select Coins", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(9, QApplication::translate("CoinControlDialog", "Date", 0));
        ___qtreewidgetitem->setText(8, QApplication::translate("CoinControlDialog", "Address", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("CoinControlDialog", "Label", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("CoinControlDialog", "Weight", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("CoinControlDialog", "Days to Stake (est.)", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("CoinControlDialog", "Potential Stake", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("CoinControlDialog", "Age", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("CoinControlDialog", "Confirmations", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("CoinControlDialog", "Amount", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("CoinControlDialog", "Select", 0));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(2, QApplication::translate("CoinControlDialog", "Confirmed", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CoinControlDialog: public Ui_CoinControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINCONTROLDIALOG_H
