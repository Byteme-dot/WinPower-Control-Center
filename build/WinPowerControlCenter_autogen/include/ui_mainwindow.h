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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionv0_3_1;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_24;
    QLabel *adminStatus;
    QVBoxLayout *verticalLayout_22;
    QGroupBox *cpuGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLabel *cpuNameLabel;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *cpuUsageLabel;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QLabel *cpuSpeedLabel;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *cpuTempLabel;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QLabel *cpuFanLabel;
    QGroupBox *gpu1GroupBox;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_17;
    QLabel *gpuNameLabel;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_19;
    QLabel *gpuUsageLabel;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_21;
    QLabel *gpuSpeedLabel;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_18;
    QLabel *gpuTempLabel;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_20;
    QLabel *gpuFanLabel;
    QGroupBox *gpu2GroupBox;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_27;
    QLabel *gpu2NameLabel;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_29;
    QLabel *gpu2UsageLabel;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_31;
    QLabel *gpu2SpeedLabel;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_28;
    QLabel *gpu2TempLabel;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_30;
    QLabel *gpu2FanLabel;
    QFrame *line_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_4;
    QPushButton *powerSchemeInfo;
    QCheckBox *autoSyncWithWindows;
    QCheckBox *syncPowerSchemeCheckBox;
    QPushButton *autoSyncInfo;
    QLabel *powerOverlay;
    QLabel *powerScheme;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_26;
    QPushButton *BestEffOverlayButton;
    QLabel *BestEffOverlayActStatus;
    QVBoxLayout *verticalLayout_27;
    QPushButton *BalancedOverlayButton;
    QLabel *BalancedOverlayActStatus;
    QVBoxLayout *verticalLayout_28;
    QPushButton *BestPerfOverlayButton;
    QLabel *BestPerfOverlayActStatus;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_29;
    QFrame *line_5;
    QSpacerItem *verticalSpacer;
    QFrame *line_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_19;
    QPushButton *ecoButton;
    QLabel *ecoActStatus;
    QVBoxLayout *verticalLayout;
    QPushButton *balancedButton;
    QLabel *balancedActStatus;
    QVBoxLayout *verticalLayout_20;
    QPushButton *performanceButton;
    QLabel *performanceActStatus;
    QVBoxLayout *verticalLayout_21;
    QPushButton *ultPerformanceButton;
    QLabel *ultPerformanceActStatus;
    QPushButton *tryEnableUltimateButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_25;
    QLabel *versionLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1600, 900);
        QFont font;
        font.setBold(false);
        font.setKerning(false);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        actionv0_3_1 = new QAction(MainWindow);
        actionv0_3_1->setObjectName("actionv0_3_1");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setKerning(false);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_30 = new QVBoxLayout(groupBox_2);
        verticalLayout_30->setObjectName("verticalLayout_30");
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        adminStatus = new QLabel(groupBox_2);
        adminStatus->setObjectName("adminStatus");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(adminStatus->sizePolicy().hasHeightForWidth());
        adminStatus->setSizePolicy(sizePolicy2);
        adminStatus->setMinimumSize(QSize(100, 0));
        adminStatus->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        verticalLayout_24->addWidget(adminStatus);


        verticalLayout_30->addLayout(verticalLayout_24);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        cpuGroupBox = new QGroupBox(groupBox_2);
        cpuGroupBox->setObjectName("cpuGroupBox");
        sizePolicy.setHeightForWidth(cpuGroupBox->sizePolicy().hasHeightForWidth());
        cpuGroupBox->setSizePolicy(sizePolicy);
        cpuGroupBox->setMinimumSize(QSize(0, 80));
        cpuGroupBox->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_7 = new QHBoxLayout(cpuGroupBox);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_7 = new QLabel(cpuGroupBox);
        label_7->setObjectName("label_7");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setKerning(false);
        label_7->setFont(font2);

        verticalLayout_8->addWidget(label_7);

        cpuNameLabel = new QLabel(cpuGroupBox);
        cpuNameLabel->setObjectName("cpuNameLabel");

        verticalLayout_8->addWidget(cpuNameLabel);


        horizontalLayout_7->addLayout(verticalLayout_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_9 = new QLabel(cpuGroupBox);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        cpuUsageLabel = new QLabel(cpuGroupBox);
        cpuUsageLabel->setObjectName("cpuUsageLabel");
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(false);
        font3.setKerning(false);
        cpuUsageLabel->setFont(font3);
        cpuUsageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(cpuUsageLabel);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_11 = new QLabel(cpuGroupBox);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_11);

        cpuSpeedLabel = new QLabel(cpuGroupBox);
        cpuSpeedLabel->setObjectName("cpuSpeedLabel");
        cpuSpeedLabel->setFont(font3);
        cpuSpeedLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(cpuSpeedLabel);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_8 = new QLabel(cpuGroupBox);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        cpuTempLabel = new QLabel(cpuGroupBox);
        cpuTempLabel->setObjectName("cpuTempLabel");
        cpuTempLabel->setFont(font3);
        cpuTempLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(cpuTempLabel);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_10 = new QLabel(cpuGroupBox);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_10);

        cpuFanLabel = new QLabel(cpuGroupBox);
        cpuFanLabel->setObjectName("cpuFanLabel");
        cpuFanLabel->setFont(font3);
        cpuFanLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(cpuFanLabel);


        horizontalLayout_7->addLayout(verticalLayout_7);

        horizontalLayout_7->setStretch(0, 3);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 1);
        horizontalLayout_7->setStretch(4, 1);

        verticalLayout_22->addWidget(cpuGroupBox);

        gpu1GroupBox = new QGroupBox(groupBox_2);
        gpu1GroupBox->setObjectName("gpu1GroupBox");
        sizePolicy.setHeightForWidth(gpu1GroupBox->sizePolicy().hasHeightForWidth());
        gpu1GroupBox->setSizePolicy(sizePolicy);
        gpu1GroupBox->setMinimumSize(QSize(0, 80));
        gpu1GroupBox->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_8 = new QHBoxLayout(gpu1GroupBox);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_17 = new QLabel(gpu1GroupBox);
        label_17->setObjectName("label_17");
        label_17->setFont(font2);

        verticalLayout_9->addWidget(label_17);

        gpuNameLabel = new QLabel(gpu1GroupBox);
        gpuNameLabel->setObjectName("gpuNameLabel");

        verticalLayout_9->addWidget(gpuNameLabel);


        horizontalLayout_8->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_19 = new QLabel(gpu1GroupBox);
        label_19->setObjectName("label_19");
        label_19->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_19);

        gpuUsageLabel = new QLabel(gpu1GroupBox);
        gpuUsageLabel->setObjectName("gpuUsageLabel");
        gpuUsageLabel->setFont(font3);
        gpuUsageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(gpuUsageLabel);


        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_21 = new QLabel(gpu1GroupBox);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(label_21);

        gpuSpeedLabel = new QLabel(gpu1GroupBox);
        gpuSpeedLabel->setObjectName("gpuSpeedLabel");
        gpuSpeedLabel->setFont(font3);
        gpuSpeedLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(gpuSpeedLabel);


        horizontalLayout_8->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_18 = new QLabel(gpu1GroupBox);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12->addWidget(label_18);

        gpuTempLabel = new QLabel(gpu1GroupBox);
        gpuTempLabel->setObjectName("gpuTempLabel");
        gpuTempLabel->setFont(font3);
        gpuTempLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12->addWidget(gpuTempLabel);


        horizontalLayout_8->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_20 = new QLabel(gpu1GroupBox);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label_20);

        gpuFanLabel = new QLabel(gpu1GroupBox);
        gpuFanLabel->setObjectName("gpuFanLabel");
        gpuFanLabel->setFont(font3);
        gpuFanLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(gpuFanLabel);


        horizontalLayout_8->addLayout(verticalLayout_13);

        horizontalLayout_8->setStretch(0, 3);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 1);
        horizontalLayout_8->setStretch(3, 1);
        horizontalLayout_8->setStretch(4, 1);

        verticalLayout_22->addWidget(gpu1GroupBox);

        gpu2GroupBox = new QGroupBox(groupBox_2);
        gpu2GroupBox->setObjectName("gpu2GroupBox");
        sizePolicy.setHeightForWidth(gpu2GroupBox->sizePolicy().hasHeightForWidth());
        gpu2GroupBox->setSizePolicy(sizePolicy);
        gpu2GroupBox->setMinimumSize(QSize(0, 80));
        gpu2GroupBox->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_9 = new QHBoxLayout(gpu2GroupBox);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_27 = new QLabel(gpu2GroupBox);
        label_27->setObjectName("label_27");
        label_27->setFont(font2);

        verticalLayout_18->addWidget(label_27);

        gpu2NameLabel = new QLabel(gpu2GroupBox);
        gpu2NameLabel->setObjectName("gpu2NameLabel");

        verticalLayout_18->addWidget(gpu2NameLabel);


        horizontalLayout_9->addLayout(verticalLayout_18);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_29 = new QLabel(gpu2GroupBox);
        label_29->setObjectName("label_29");
        label_29->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_29);

        gpu2UsageLabel = new QLabel(gpu2GroupBox);
        gpu2UsageLabel->setObjectName("gpu2UsageLabel");
        gpu2UsageLabel->setFont(font3);
        gpu2UsageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(gpu2UsageLabel);


        horizontalLayout_9->addLayout(verticalLayout_17);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_31 = new QLabel(gpu2GroupBox);
        label_31->setObjectName("label_31");
        label_31->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(label_31);

        gpu2SpeedLabel = new QLabel(gpu2GroupBox);
        gpu2SpeedLabel->setObjectName("gpu2SpeedLabel");
        gpu2SpeedLabel->setFont(font3);
        gpu2SpeedLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(gpu2SpeedLabel);


        horizontalLayout_9->addLayout(verticalLayout_16);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_28 = new QLabel(gpu2GroupBox);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(label_28);

        gpu2TempLabel = new QLabel(gpu2GroupBox);
        gpu2TempLabel->setObjectName("gpu2TempLabel");
        gpu2TempLabel->setFont(font3);
        gpu2TempLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(gpu2TempLabel);


        horizontalLayout_9->addLayout(verticalLayout_15);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_30 = new QLabel(gpu2GroupBox);
        label_30->setObjectName("label_30");
        label_30->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(label_30);

        gpu2FanLabel = new QLabel(gpu2GroupBox);
        gpu2FanLabel->setObjectName("gpu2FanLabel");
        gpu2FanLabel->setFont(font3);
        gpu2FanLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(gpu2FanLabel);


        horizontalLayout_9->addLayout(verticalLayout_14);

        horizontalLayout_9->setStretch(0, 3);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 1);
        horizontalLayout_9->setStretch(3, 1);
        horizontalLayout_9->setStretch(4, 1);

        verticalLayout_22->addWidget(gpu2GroupBox);


        verticalLayout_30->addLayout(verticalLayout_22);

        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_30->addWidget(line_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        powerSchemeInfo = new QPushButton(groupBox_2);
        powerSchemeInfo->setObjectName("powerSchemeInfo");
        sizePolicy2.setHeightForWidth(powerSchemeInfo->sizePolicy().hasHeightForWidth());
        powerSchemeInfo->setSizePolicy(sizePolicy2);
        powerSchemeInfo->setMinimumSize(QSize(20, 20));
        powerSchemeInfo->setMaximumSize(QSize(20, 20));
        QFont font4;
        font4.setBold(true);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        powerSchemeInfo->setFont(font4);
        powerSchemeInfo->setAcceptDrops(false);
        powerSchemeInfo->setAutoFillBackground(false);

        gridLayout_4->addWidget(powerSchemeInfo, 0, 0, 1, 1);

        autoSyncWithWindows = new QCheckBox(groupBox_2);
        autoSyncWithWindows->setObjectName("autoSyncWithWindows");
        sizePolicy2.setHeightForWidth(autoSyncWithWindows->sizePolicy().hasHeightForWidth());
        autoSyncWithWindows->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(autoSyncWithWindows, 1, 1, 1, 1);

        syncPowerSchemeCheckBox = new QCheckBox(groupBox_2);
        syncPowerSchemeCheckBox->setObjectName("syncPowerSchemeCheckBox");
        sizePolicy2.setHeightForWidth(syncPowerSchemeCheckBox->sizePolicy().hasHeightForWidth());
        syncPowerSchemeCheckBox->setSizePolicy(sizePolicy2);
        syncPowerSchemeCheckBox->setMinimumSize(QSize(200, 0));

        gridLayout_4->addWidget(syncPowerSchemeCheckBox, 0, 1, 1, 1);

        autoSyncInfo = new QPushButton(groupBox_2);
        autoSyncInfo->setObjectName("autoSyncInfo");
        sizePolicy2.setHeightForWidth(autoSyncInfo->sizePolicy().hasHeightForWidth());
        autoSyncInfo->setSizePolicy(sizePolicy2);
        autoSyncInfo->setMinimumSize(QSize(20, 20));
        autoSyncInfo->setMaximumSize(QSize(20, 20));
        autoSyncInfo->setFont(font4);
        autoSyncInfo->setAutoFillBackground(false);

        gridLayout_4->addWidget(autoSyncInfo, 1, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 1);

        gridLayout->addLayout(gridLayout_4, 2, 0, 1, 1);

        powerOverlay = new QLabel(groupBox_2);
        powerOverlay->setObjectName("powerOverlay");

        gridLayout->addWidget(powerOverlay, 1, 0, 1, 1);

        powerScheme = new QLabel(groupBox_2);
        powerScheme->setObjectName("powerScheme");

        gridLayout->addWidget(powerScheme, 0, 0, 1, 1);


        verticalLayout_30->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_2);

        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_30->addWidget(line_2);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setKerning(false);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_23->addWidget(label_2);


        verticalLayout_30->addLayout(verticalLayout_23);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        BestEffOverlayButton = new QPushButton(groupBox_2);
        BestEffOverlayButton->setObjectName("BestEffOverlayButton");
        sizePolicy.setHeightForWidth(BestEffOverlayButton->sizePolicy().hasHeightForWidth());
        BestEffOverlayButton->setSizePolicy(sizePolicy);
        BestEffOverlayButton->setMinimumSize(QSize(100, 40));

        verticalLayout_26->addWidget(BestEffOverlayButton);

        BestEffOverlayActStatus = new QLabel(groupBox_2);
        BestEffOverlayActStatus->setObjectName("BestEffOverlayActStatus");
        BestEffOverlayActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_26->addWidget(BestEffOverlayActStatus);


        horizontalLayout_3->addLayout(verticalLayout_26);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName("verticalLayout_27");
        BalancedOverlayButton = new QPushButton(groupBox_2);
        BalancedOverlayButton->setObjectName("BalancedOverlayButton");
        sizePolicy.setHeightForWidth(BalancedOverlayButton->sizePolicy().hasHeightForWidth());
        BalancedOverlayButton->setSizePolicy(sizePolicy);
        BalancedOverlayButton->setMinimumSize(QSize(90, 40));

        verticalLayout_27->addWidget(BalancedOverlayButton);

        BalancedOverlayActStatus = new QLabel(groupBox_2);
        BalancedOverlayActStatus->setObjectName("BalancedOverlayActStatus");
        BalancedOverlayActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_27->addWidget(BalancedOverlayActStatus);


        horizontalLayout_3->addLayout(verticalLayout_27);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName("verticalLayout_28");
        BestPerfOverlayButton = new QPushButton(groupBox_2);
        BestPerfOverlayButton->setObjectName("BestPerfOverlayButton");
        sizePolicy.setHeightForWidth(BestPerfOverlayButton->sizePolicy().hasHeightForWidth());
        BestPerfOverlayButton->setSizePolicy(sizePolicy);
        BestPerfOverlayButton->setMinimumSize(QSize(110, 40));

        verticalLayout_28->addWidget(BestPerfOverlayButton);

        BestPerfOverlayActStatus = new QLabel(groupBox_2);
        BestPerfOverlayActStatus->setObjectName("BestPerfOverlayActStatus");
        BestPerfOverlayActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_28->addWidget(BestPerfOverlayActStatus);


        horizontalLayout_3->addLayout(verticalLayout_28);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_30->addLayout(horizontalLayout_3);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName("verticalLayout_29");

        verticalLayout_30->addLayout(verticalLayout_29);

        line_5 = new QFrame(groupBox_2);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_30->addWidget(line_5);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_30->addItem(verticalSpacer);

        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_30->addWidget(line_4);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_30->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        ecoButton = new QPushButton(groupBox_2);
        ecoButton->setObjectName("ecoButton");
        sizePolicy.setHeightForWidth(ecoButton->sizePolicy().hasHeightForWidth());
        ecoButton->setSizePolicy(sizePolicy);
        ecoButton->setMinimumSize(QSize(80, 40));

        verticalLayout_19->addWidget(ecoButton);

        ecoActStatus = new QLabel(groupBox_2);
        ecoActStatus->setObjectName("ecoActStatus");
        ecoActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(ecoActStatus);


        horizontalLayout_5->addLayout(verticalLayout_19);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        balancedButton = new QPushButton(groupBox_2);
        balancedButton->setObjectName("balancedButton");
        sizePolicy.setHeightForWidth(balancedButton->sizePolicy().hasHeightForWidth());
        balancedButton->setSizePolicy(sizePolicy);
        balancedButton->setMinimumSize(QSize(100, 40));

        verticalLayout->addWidget(balancedButton);

        balancedActStatus = new QLabel(groupBox_2);
        balancedActStatus->setObjectName("balancedActStatus");
        balancedActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(balancedActStatus);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        performanceButton = new QPushButton(groupBox_2);
        performanceButton->setObjectName("performanceButton");
        sizePolicy.setHeightForWidth(performanceButton->sizePolicy().hasHeightForWidth());
        performanceButton->setSizePolicy(sizePolicy);
        performanceButton->setMinimumSize(QSize(120, 40));

        verticalLayout_20->addWidget(performanceButton);

        performanceActStatus = new QLabel(groupBox_2);
        performanceActStatus->setObjectName("performanceActStatus");
        performanceActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_20->addWidget(performanceActStatus);


        horizontalLayout_5->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        ultPerformanceButton = new QPushButton(groupBox_2);
        ultPerformanceButton->setObjectName("ultPerformanceButton");
        sizePolicy.setHeightForWidth(ultPerformanceButton->sizePolicy().hasHeightForWidth());
        ultPerformanceButton->setSizePolicy(sizePolicy);
        ultPerformanceButton->setMinimumSize(QSize(170, 40));

        verticalLayout_21->addWidget(ultPerformanceButton);

        ultPerformanceActStatus = new QLabel(groupBox_2);
        ultPerformanceActStatus->setObjectName("ultPerformanceActStatus");
        ultPerformanceActStatus->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_21->addWidget(ultPerformanceActStatus);


        horizontalLayout_5->addLayout(verticalLayout_21);

        tryEnableUltimateButton = new QPushButton(groupBox_2);
        tryEnableUltimateButton->setObjectName("tryEnableUltimateButton");
        sizePolicy.setHeightForWidth(tryEnableUltimateButton->sizePolicy().hasHeightForWidth());
        tryEnableUltimateButton->setSizePolicy(sizePolicy);
        tryEnableUltimateButton->setMinimumSize(QSize(70, 20));
        tryEnableUltimateButton->setMaximumSize(QSize(80, 30));
        QFont font6;
        font6.setBold(false);
        font6.setItalic(true);
        font6.setUnderline(false);
        font6.setKerning(false);
        tryEnableUltimateButton->setFont(font6);
        tryEnableUltimateButton->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        tryEnableUltimateButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        tryEnableUltimateButton->setAutoFillBackground(false);

        horizontalLayout_5->addWidget(tryEnableUltimateButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_30->addLayout(horizontalLayout_5);

        line = new QFrame(groupBox_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_30->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_3);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        versionLabel = new QLabel(groupBox_2);
        versionLabel->setObjectName("versionLabel");
        sizePolicy1.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy1);
        versionLabel->setMaximumSize(QSize(100, 10));
        versionLabel->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        verticalLayout_25->addWidget(versionLabel);


        verticalLayout_30->addLayout(verticalLayout_25);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

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
        label->setText(QCoreApplication::translate("MainWindow", "WinPower Control Center", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        adminStatus->setText(QCoreApplication::translate("MainWindow", "Admin Status:", nullptr));
        cpuGroupBox->setTitle(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "CPU", nullptr));
        cpuNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Utilization", nullptr));
        cpuUsageLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        cpuSpeedLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        cpuTempLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Fan Speed", nullptr));
        cpuFanLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        gpu1GroupBox->setTitle(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "GPU 1", nullptr));
        gpuNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Utilization", nullptr));
        gpuUsageLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        gpuSpeedLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        gpuTempLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Fan Speed", nullptr));
        gpuFanLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        gpu2GroupBox->setTitle(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "GPU 2", nullptr));
        gpu2NameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Utilization", nullptr));
        gpu2UsageLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        gpu2SpeedLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        gpu2TempLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Fan Speed", nullptr));
        gpu2FanLabel->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        powerSchemeInfo->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        autoSyncWithWindows->setText(QCoreApplication::translate("MainWindow", "Auto Sync", nullptr));
        syncPowerSchemeCheckBox->setText(QCoreApplication::translate("MainWindow", "Sync Power Scheme", nullptr));
        autoSyncInfo->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        powerOverlay->setText(QCoreApplication::translate("MainWindow", "Power Overlay:", nullptr));
        powerScheme->setText(QCoreApplication::translate("MainWindow", "Power Scheme: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Power Overlay Settings", nullptr));
        BestEffOverlayButton->setText(QCoreApplication::translate("MainWindow", "Best Efficiency", nullptr));
        BestEffOverlayActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        BalancedOverlayButton->setText(QCoreApplication::translate("MainWindow", "Balanced", nullptr));
        BalancedOverlayActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        BestPerfOverlayButton->setText(QCoreApplication::translate("MainWindow", "Best Performance", nullptr));
        BestPerfOverlayActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Power Scheme Settings", nullptr));
        ecoButton->setText(QCoreApplication::translate("MainWindow", "Eco Mode", nullptr));
        ecoActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        balancedButton->setText(QCoreApplication::translate("MainWindow", "Balanced Mode", nullptr));
        balancedActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        performanceButton->setText(QCoreApplication::translate("MainWindow", "Performance Mode", nullptr));
        performanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        ultPerformanceButton->setText(QCoreApplication::translate("MainWindow", "Ultimate Performance Mode", nullptr));
        ultPerformanceActStatus->setText(QCoreApplication::translate("MainWindow", "(active)", nullptr));
        tryEnableUltimateButton->setText(QCoreApplication::translate("MainWindow", "Try Enabling", nullptr));
        versionLabel->setText(QCoreApplication::translate("MainWindow", "version", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
