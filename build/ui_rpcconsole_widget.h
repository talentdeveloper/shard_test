/********************************************************************************
** Form generated from reading UI file 'rpcconsole_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_WIDGET_H
#define UI_RPCCONSOLE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QLabel *clientVersion;
    QLabel *label_14;
    QLabel *openSSLVersion;
    QLabel *label_12;
    QLabel *clientName;
    QLabel *label_6;
    QLabel *numberOfConnections;
    QLabel *label_8;
    QCheckBox *isTestNet;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *buildDate;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *lastBlockTime;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QLabel *labelCLOptions;
    QPushButton *showCLOptionsButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line;
    QLabel *label_16;
    QLabel *lblBytesIn;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_2;
    QLabel *label_17;
    QLabel *lblBytesOut;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *RPCConsole_Widget)
    {
        if (RPCConsole_Widget->objectName().isEmpty())
            RPCConsole_Widget->setObjectName(QStringLiteral("RPCConsole_Widget"));
        RPCConsole_Widget->resize(676, 627);
        RPCConsole_Widget->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(RPCConsole_Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(9, 10, 661, 611));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget{border:0px solid #0a2634;color:white;}\n"
"QTabBar{color:white;background:#0a2634;}\n"
"QTabBar::tab {\n"
"    background: #002d3f;\n"
"    border: 1px solid #002d3f;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"    background: #0a2634;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #003750;border:0px;color:white;\n"
"}\n"
"QTabBar::tab:selected:hover {\n"
"    background: #0a2634;border:0px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"    border-color: #0a2634;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"color:gray;\n"
"}\n"
"QTabBar::tab:hover:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"color:white;\n"
"}"));
        tab_info = new QWidget();
        tab_info->setObjectName(QStringLiteral("tab_info"));
        tab_info->setStyleSheet(QStringLiteral("background:'#0a2634';"));
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QStringLiteral("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setStyleSheet(QStringLiteral("color:white"));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 2, 1, 1, 1);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("color:white"));
        label_14->setIndent(10);

        gridLayout->addWidget(label_14, 3, 0, 1, 1);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QStringLiteral("openSSLVersion"));
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setStyleSheet(QStringLiteral("color:white"));
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(openSSLVersion, 3, 1, 1, 1);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QStringLiteral("clientName"));
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setStyleSheet(QStringLiteral("color:white"));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientName, 1, 1, 1, 1);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QStringLiteral("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setStyleSheet(QStringLiteral("color:white"));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 7, 1, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        isTestNet = new QCheckBox(tab_info);
        isTestNet->setObjectName(QStringLiteral("isTestNet"));
        isTestNet->setEnabled(false);

        gridLayout->addWidget(isTestNet, 8, 1, 1, 1);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_3, 10, 0, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QStringLiteral("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setStyleSheet(QStringLiteral("color:white"));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 10, 1, 1, 1);

        label_2 = new QLabel(tab_info);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QStringLiteral("buildDate"));
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setStyleSheet(QStringLiteral("color:white"));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(buildDate, 4, 1, 1, 1);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QStringLiteral("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setStyleSheet(QStringLiteral("color:white"));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 1, 1, 1);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QStringLiteral("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setStyleSheet(QStringLiteral("color:white"));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 11, 1, 1, 1);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QStringLiteral("labelDebugLogfile"));
        labelDebugLogfile->setFont(font);
        labelDebugLogfile->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(labelDebugLogfile, 12, 0, 1, 1);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QStringLiteral("openDebugLogfileButton"));
        openDebugLogfileButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
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
        openDebugLogfileButton->setAutoDefault(false);

        gridLayout->addWidget(openDebugLogfileButton, 13, 0, 1, 1);

        labelCLOptions = new QLabel(tab_info);
        labelCLOptions->setObjectName(QStringLiteral("labelCLOptions"));
        labelCLOptions->setFont(font);
        labelCLOptions->setStyleSheet(QStringLiteral("color:white"));

        gridLayout->addWidget(labelCLOptions, 14, 0, 1, 1);

        showCLOptionsButton = new QPushButton(tab_info);
        showCLOptionsButton->setObjectName(QStringLiteral("showCLOptionsButton"));
        showCLOptionsButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
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
        showCLOptionsButton->setAutoDefault(false);

        gridLayout->addWidget(showCLOptionsButton, 15, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 1);

        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QStringLiteral("tab_console"));
        tab_console->setStyleSheet(QStringLiteral("background:'#0a2634';"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setStyleSheet(QStringLiteral("color:white"));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab_console);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color:white"));
        label->setText(QStringLiteral(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("background:#003750;\n"
"color:white;\n"
"padding:2px;\n"
"border-radius:5px;"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMaximumSize(QSize(24, 24));
        clearButton->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#002d3f\";\n"
"	border:1px solid gray;\n"
"	color:white;\n"
"	outline: none;\n"
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_console, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral("background:'#0a2634';"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(tab);
        trafficGraph->setObjectName(QStringLiteral("trafficGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sldGraphRange = new QSlider(tab);
        sldGraphRange->setObjectName(QStringLiteral("sldGraphRange"));
        sldGraphRange->setMinimum(1);
        sldGraphRange->setMaximum(288);
        sldGraphRange->setPageStep(12);
        sldGraphRange->setValue(6);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(tab);
        lblGraphRange->setObjectName(QStringLiteral("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(tab);
        btnClearTrafficGraph->setObjectName(QStringLiteral("btnClearTrafficGraph"));
        btnClearTrafficGraph->setStyleSheet(QLatin1String("QPushButton { \n"
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

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("color:white"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(10, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(10, 38, 52, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        line->setPalette(palette);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_4->addWidget(label_16);

        lblBytesIn = new QLabel(groupBox);
        lblBytesIn->setObjectName(QStringLiteral("lblBytesIn"));
        lblBytesIn->setMinimumSize(QSize(50, 0));
        lblBytesIn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblBytesIn);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(10, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        line_2->setPalette(palette1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);

        lblBytesOut = new QLabel(groupBox);
        lblBytesOut->setObjectName(QStringLiteral("lblBytesOut"));
        lblBytesOut->setMinimumSize(QSize(50, 0));
        lblBytesOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblBytesOut);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 407, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());

        retranslateUi(RPCConsole_Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole_Widget);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole_Widget)
    {
        RPCConsole_Widget->setWindowTitle(QApplication::translate("RPCConsole_Widget", "Form", 0));
        clientVersion->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_14->setText(QApplication::translate("RPCConsole_Widget", "Using OpenSSL version", 0));
        openSSLVersion->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_12->setText(QApplication::translate("RPCConsole_Widget", "Build date", 0));
        clientName->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_6->setText(QApplication::translate("RPCConsole_Widget", "Client version", 0));
        numberOfConnections->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_8->setText(QApplication::translate("RPCConsole_Widget", "On testnet", 0));
        isTestNet->setText(QString());
        label_10->setText(QApplication::translate("RPCConsole_Widget", "Block chain", 0));
        label_3->setText(QApplication::translate("RPCConsole_Widget", "Current number of blocks", 0));
        numberOfBlocks->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_2->setText(QApplication::translate("RPCConsole_Widget", "Last block time", 0));
        label_9->setText(QApplication::translate("RPCConsole_Widget", "Shard Core", 0));
        label_5->setText(QApplication::translate("RPCConsole_Widget", "Client name", 0));
        buildDate->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_13->setText(QApplication::translate("RPCConsole_Widget", "Startup time", 0));
        startupTime->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        label_11->setText(QApplication::translate("RPCConsole_Widget", "Network", 0));
        label_7->setText(QApplication::translate("RPCConsole_Widget", "Number of connections", 0));
        lastBlockTime->setText(QApplication::translate("RPCConsole_Widget", "N/A", 0));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole_Widget", "Debug log file", 0));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole_Widget", "Open the Shard debug log file from the current data directory. This can take a few seconds for large log files.", 0));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole_Widget", "&Open", 0));
        labelCLOptions->setText(QApplication::translate("RPCConsole_Widget", "Command-line options", 0));
#ifndef QT_NO_TOOLTIP
        showCLOptionsButton->setToolTip(QApplication::translate("RPCConsole_Widget", "Show the Shard-Qt help message to get a list with possible Shard command-line options.", 0));
#endif // QT_NO_TOOLTIP
        showCLOptionsButton->setText(QApplication::translate("RPCConsole_Widget", "&Show", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole_Widget", "&Information", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole_Widget", "Clear console", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole_Widget", "&Console", 0));
        btnClearTrafficGraph->setText(QApplication::translate("RPCConsole_Widget", "&Clear", 0));
        groupBox->setTitle(QApplication::translate("RPCConsole_Widget", "Totals", 0));
        label_16->setText(QApplication::translate("RPCConsole_Widget", "In:", 0));
        label_17->setText(QApplication::translate("RPCConsole_Widget", "Out:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("RPCConsole_Widget", "&Network Traffic", 0));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole_Widget: public Ui_RPCConsole_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_WIDGET_H
