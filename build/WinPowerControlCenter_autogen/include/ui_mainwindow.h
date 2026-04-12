/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionv0_3_1;
    QWidget *centralwidget;
    QLabel *modeLabel;
    QPushButton *balancedButton;
    QPushButton *performanceButton;
    QPushButton *ecoButton;
    QLabel *balancedActStatus;
    QLabel *ecoActStatus;
    QLabel *performanceActStatus;
    QLabel *ultPerformanceActStatus;
    QPushButton *ultPerformanceButton;
    QCheckBox *syncPowerSchemeCheckBox;
    QCheckBox *autoSyncWithWindows;
    QPushButton *autoSyncInfo;
    QPushButton *powerSchemeInfo;
    QPushButton *tryEnableUltimateButton;
    QLabel *versionLabel;
    QGroupBox *cpuGroupBox;
    QLabel *label_2;
    QLabel *cpuTempLabel;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_4;
    QLabel *cpuUsageLabel;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *cpuSpeedLabel;
    QLabel *cpuFanLabel;
    QFrame *line_5;
    QLabel *cpuNameLabel;
    QGroupBox *gpu1GroupBox;
    QLabel *label_12;
    QLabel *gpuTempLabel;
    QLabel *label_13;
    QFrame *line_3;
    QLabel *label_14;
    QLabel *gpuUsageLabel;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *gpuSpeedLabel;
    QLabel *gpuFanLabel;
    QFrame *line_4;
    QLabel *gpuNameLabel;
    QWidget *widget;
    QLabel *label;
    QPushButton *runAsAdminButton;
    QLabel *adminStatus;
    QGroupBox *gpu2GroupBox;
    QLabel *label_22;
    QLabel *gpu2TempLabel;
    QLabel *label_23;
    QFrame *line_8;
    QLabel *label_24;
    QLabel *gpu2UsageLabel;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *gpu2SpeedLabel;
    QLabel *gpu2FanLabel;
    QFrame *line_9;
    QLabel *gpu2NameLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setBold(false);
        font.setKerning(false);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        actionv0_3_1 = new QAction(MainWindow);
        actionv0_3_1->setObjectName("actionv0_3_1");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        modeLabel = new QLabel(centralwidget);
        modeLabel->setObjectName("modeLabel");
        modeLabel->setGeometry(QRect(100, 355, 151, 20));
        balancedButton = new QPushButton(centralwidget);
        balancedButton->setObjectName("balancedButton");
        balancedButton->setGeometry(QRect(190, 465, 131, 41));
        performanceButton = new QPushButton(centralwidget);
        performanceButton->setObjectName("performanceButton");
        performanceButton->setGeometry(QRect(340, 465, 161, 41));
        ecoButton = new QPushButton(centralwidget);
        ecoButton->setObjectName("ecoButton");
        ecoButton->setGeometry(QRect(60, 465, 101, 41));
        balancedActStatus = new QLabel(centralwidget);
        balancedActStatus->setObjectName("balancedActStatus");
        balancedActStatus->setGeometry(QRect(230, 505, 51, 20));
        balancedActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ecoActStatus = new QLabel(centralwidget);
        ecoActStatus->setObjectName("ecoActStatus");
        ecoActStatus->setGeometry(QRect(85, 505, 51, 20));
        ecoActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        performanceActStatus = new QLabel(centralwidget);
        performanceActStatus->setObjectName("performanceActStatus");
        performanceActStatus->setGeometry(QRect(390, 505, 51, 20));
        performanceActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ultPerformanceActStatus = new QLabel(centralwidget);
        ultPerformanceActStatus->setObjectName("ultPerformanceActStatus");
        ultPerformanceActStatus->setGeometry(QRect(540, 505, 181, 20));
        ultPerformanceActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ultPerformanceButton = new QPushButton(centralwidget);
        ultPerformanceButton->setObjectName("ultPerformanceButton");
        ultPerformanceButton->setGeometry(QRect(520, 465, 221, 41));
        syncPowerSchemeCheckBox = new QCheckBox(centralwidget);
        syncPowerSchemeCheckBox->setObjectName("syncPowerSchemeCheckBox");
        syncPowerSchemeCheckBox->setGeometry(QRect(100, 385, 161, 25));
        autoSyncWithWindows = new QCheckBox(centralwidget);
        autoSyncWithWindows->setObjectName("autoSyncWithWindows");
        autoSyncWithWindows->setGeometry(QRect(100, 415, 91, 25));
        autoSyncInfo = new QPushButton(centralwidget);
        autoSyncInfo->setObjectName("autoSyncInfo");
        autoSyncInfo->setGeometry(QRect(70, 418, 21, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(autoSyncInfo->sizePolicy().hasHeightForWidth());
        autoSyncInfo->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        autoSyncInfo->setFont(font1);
        autoSyncInfo->setAutoFillBackground(false);
        powerSchemeInfo = new QPushButton(centralwidget);
        powerSchemeInfo->setObjectName("powerSchemeInfo");
        powerSchemeInfo->setGeometry(QRect(70, 387, 21, 20));
        sizePolicy.setHeightForWidth(powerSchemeInfo->sizePolicy().hasHeightForWidth());
        powerSchemeInfo->setSizePolicy(sizePolicy);
        powerSchemeInfo->setFont(font1);
        powerSchemeInfo->setAcceptDrops(false);
        powerSchemeInfo->setAutoFillBackground(false);
        tryEnableUltimateButton = new QPushButton(centralwidget);
        tryEnableUltimateButton->setObjectName("tryEnableUltimateButton");
        tryEnableUltimateButton->setGeometry(QRect(580, 440, 91, 21));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setKerning(false);
        tryEnableUltimateButton->setFont(font2);
        tryEnableUltimateButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        versionLabel = new QLabel(centralwidget);
        versionLabel->setObjectName("versionLabel");
        versionLabel->setGeometry(QRect(690, 550, 111, 20));
        cpuGroupBox = new QGroupBox(centralwidget);
        cpuGroupBox->setObjectName("cpuGroupBox");
        cpuGroupBox->setGeometry(QRect(40, 100, 711, 80));
        label_2 = new QLabel(cpuGroupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(5, 10, 71, 31));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setKerning(false);
        label_2->setFont(font3);
        cpuTempLabel = new QLabel(cpuGroupBox);
        cpuTempLabel->setObjectName("cpuTempLabel");
        cpuTempLabel->setGeometry(QRect(450, 30, 111, 41));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(false);
        font4.setKerning(false);
        cpuTempLabel->setFont(font4);
        label_3 = new QLabel(cpuGroupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 7, 91, 20));
        line = new QFrame(cpuGroupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(170, 6, 20, 71));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_4 = new QLabel(cpuGroupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 7, 71, 20));
        cpuUsageLabel = new QLabel(cpuGroupBox);
        cpuUsageLabel->setObjectName("cpuUsageLabel");
        cpuUsageLabel->setGeometry(QRect(200, 30, 71, 41));
        cpuUsageLabel->setFont(font4);
        label_5 = new QLabel(cpuGroupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(580, 7, 81, 20));
        label_6 = new QLabel(cpuGroupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(300, 7, 41, 20));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cpuSpeedLabel = new QLabel(cpuGroupBox);
        cpuSpeedLabel->setObjectName("cpuSpeedLabel");
        cpuSpeedLabel->setGeometry(QRect(300, 30, 121, 41));
        cpuSpeedLabel->setFont(font4);
        cpuFanLabel = new QLabel(cpuGroupBox);
        cpuFanLabel->setObjectName("cpuFanLabel");
        cpuFanLabel->setGeometry(QRect(590, 30, 101, 41));
        cpuFanLabel->setFont(font4);
        line_5 = new QFrame(cpuGroupBox);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(560, 6, 20, 71));
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        cpuNameLabel = new QLabel(cpuGroupBox);
        cpuNameLabel->setObjectName("cpuNameLabel");
        cpuNameLabel->setGeometry(QRect(10, 50, 161, 20));
        gpu1GroupBox = new QGroupBox(centralwidget);
        gpu1GroupBox->setObjectName("gpu1GroupBox");
        gpu1GroupBox->setGeometry(QRect(40, 180, 711, 80));
        label_12 = new QLabel(gpu1GroupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(5, 10, 91, 31));
        label_12->setFont(font3);
        gpuTempLabel = new QLabel(gpu1GroupBox);
        gpuTempLabel->setObjectName("gpuTempLabel");
        gpuTempLabel->setGeometry(QRect(450, 30, 111, 41));
        gpuTempLabel->setFont(font4);
        label_13 = new QLabel(gpu1GroupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(440, 7, 91, 20));
        line_3 = new QFrame(gpu1GroupBox);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(170, 6, 20, 71));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_14 = new QLabel(gpu1GroupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(190, 7, 71, 20));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gpuUsageLabel = new QLabel(gpu1GroupBox);
        gpuUsageLabel->setObjectName("gpuUsageLabel");
        gpuUsageLabel->setGeometry(QRect(200, 30, 71, 41));
        gpuUsageLabel->setFont(font4);
        label_15 = new QLabel(gpu1GroupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(580, 7, 81, 20));
        label_16 = new QLabel(gpu1GroupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(300, 7, 41, 20));
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gpuSpeedLabel = new QLabel(gpu1GroupBox);
        gpuSpeedLabel->setObjectName("gpuSpeedLabel");
        gpuSpeedLabel->setGeometry(QRect(300, 30, 121, 41));
        gpuSpeedLabel->setFont(font4);
        gpuFanLabel = new QLabel(gpu1GroupBox);
        gpuFanLabel->setObjectName("gpuFanLabel");
        gpuFanLabel->setGeometry(QRect(590, 30, 101, 41));
        gpuFanLabel->setFont(font4);
        line_4 = new QFrame(gpu1GroupBox);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(560, 6, 20, 71));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        gpuNameLabel = new QLabel(gpu1GroupBox);
        gpuNameLabel->setObjectName("gpuNameLabel");
        gpuNameLabel->setGeometry(QRect(10, 50, 161, 20));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 801, 80));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 401, 41));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setKerning(false);
        label->setFont(font5);
        runAsAdminButton = new QPushButton(widget);
        runAsAdminButton->setObjectName("runAsAdminButton");
        runAsAdminButton->setGeometry(QRect(660, 40, 101, 29));
        adminStatus = new QLabel(widget);
        adminStatus->setObjectName("adminStatus");
        adminStatus->setGeometry(QRect(620, 10, 131, 20));
        gpu2GroupBox = new QGroupBox(centralwidget);
        gpu2GroupBox->setObjectName("gpu2GroupBox");
        gpu2GroupBox->setGeometry(QRect(40, 260, 711, 80));
        label_22 = new QLabel(gpu2GroupBox);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(5, 10, 91, 31));
        label_22->setFont(font3);
        gpu2TempLabel = new QLabel(gpu2GroupBox);
        gpu2TempLabel->setObjectName("gpu2TempLabel");
        gpu2TempLabel->setGeometry(QRect(450, 30, 111, 41));
        gpu2TempLabel->setFont(font4);
        label_23 = new QLabel(gpu2GroupBox);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(440, 7, 91, 20));
        line_8 = new QFrame(gpu2GroupBox);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(170, 6, 20, 71));
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        label_24 = new QLabel(gpu2GroupBox);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(190, 7, 71, 20));
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gpu2UsageLabel = new QLabel(gpu2GroupBox);
        gpu2UsageLabel->setObjectName("gpu2UsageLabel");
        gpu2UsageLabel->setGeometry(QRect(200, 30, 71, 41));
        gpu2UsageLabel->setFont(font4);
        label_25 = new QLabel(gpu2GroupBox);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(580, 7, 81, 20));
        label_26 = new QLabel(gpu2GroupBox);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(300, 7, 41, 20));
        label_26->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gpu2SpeedLabel = new QLabel(gpu2GroupBox);
        gpu2SpeedLabel->setObjectName("gpu2SpeedLabel");
        gpu2SpeedLabel->setGeometry(QRect(300, 30, 121, 41));
        gpu2SpeedLabel->setFont(font4);
        gpu2FanLabel = new QLabel(gpu2GroupBox);
        gpu2FanLabel->setObjectName("gpu2FanLabel");
        gpu2FanLabel->setGeometry(QRect(590, 30, 101, 41));
        gpu2FanLabel->setFont(font4);
        line_9 = new QFrame(gpu2GroupBox);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(560, 6, 20, 71));
        line_9->setFrameShape(QFrame::Shape::VLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        gpu2NameLabel = new QLabel(gpu2GroupBox);
        gpu2NameLabel->setObjectName("gpu2NameLabel");
        gpu2NameLabel->setGeometry(QRect(10, 50, 161, 20));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionv0_3_1->setText(QCoreApplication::translate("MainWindow", "v0.3.1", nullptr));
        modeLabel->setText(QCoreApplication::translate("MainWindow", "Mode: ", nullptr));
        balancedButton->setText(QCoreApplication::translate("MainWindow", "Balanced Mode", nullptr));
        performanceButton->setText(QCoreApplication::translate("MainWindow", "Performance Mode", nullptr));
        ecoButton->setText(QCoreApplication::translate("MainWindow", "Eco Mode", nullptr));
        balancedActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ecoActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        performanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ultPerformanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ultPerformanceButton->setText(QCoreApplication::translate("MainWindow", "Ultimate Performance Mode", nullptr));
        syncPowerSchemeCheckBox->setText(QCoreApplication::translate("MainWindow", "Sync Power Scheme", nullptr));
        autoSyncWithWindows->setText(QCoreApplication::translate("MainWindow", "Auto Sync", nullptr));
        autoSyncInfo->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        powerSchemeInfo->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        tryEnableUltimateButton->setText(QCoreApplication::translate("MainWindow", "Try Enabling", nullptr));
        versionLabel->setText(QCoreApplication::translate("MainWindow", "version", nullptr));
        cpuGroupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "CPU", nullptr));
        cpuTempLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Utilization", nullptr));
        cpuUsageLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Fan Speed", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        cpuSpeedLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        cpuFanLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        cpuNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        gpu1GroupBox->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "GPU 1", nullptr));
        gpuTempLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Utilization", nullptr));
        gpuUsageLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Fan Speed", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        gpuSpeedLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        gpuFanLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        gpuNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "WinPower Control Center", nullptr));
        runAsAdminButton->setText(QCoreApplication::translate("MainWindow", "Run As Admin", nullptr));
        adminStatus->setText(QCoreApplication::translate("MainWindow", "Admin Status:", nullptr));
        gpu2GroupBox->setTitle(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "GPU 2", nullptr));
        gpu2TempLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Utilization", nullptr));
        gpu2UsageLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Fan Speed", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        gpu2SpeedLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        gpu2FanLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        gpu2NameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
