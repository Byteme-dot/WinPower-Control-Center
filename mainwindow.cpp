#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <windows.h>
#include <QCoreApplication>
#include <QMessageBox>
#include "manageadmin.h"
#include <QJsonDocument>
#include <QJsonObject>
#define APP_VERSION "v0.4"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->versionLabel->setText("Version: " APP_VERSION);
// ------------------------ EXTRACTING AND SYNCING CURRENT WINDOW'S POWER SCHEME ---------------------------------

    QString systemPowerScheme = monitor.getMode();
    ui->modeLabel->setText("Mode: " + systemPowerScheme);
    ui->gpu2GroupBox->setVisible(false);
// ===============================================================================================================

// -------------- VERIFYING ADMIN, CHANGING ADMIN STATUS, ENABLE ADMIN BUTTON, ADMIN BUTTON FUNCTION -------------

    isAdmin = isRunningAsAdmin(); //Extracting function value into a variable

    if(isAdmin){
        ui->adminStatus->setText("Admin Mode: ON");
        ui->runAsAdminButton->setVisible(false);
    }else{
        ui->adminStatus->setText("Admin Mode: OFF");
        ui->runAsAdminButton->setVisible(true);
    }

    updateModeUI();

    connect(ui->runAsAdminButton, &QPushButton::clicked, this, [this]() {
        relaunchAsAdmin();
    });


    if(!isAdmin){
        ui->syncPowerSchemeCheckBox->setEnabled(false);
        ui->syncPowerSchemeCheckBox->setToolTip("Run as admin to enable this feature!");
        ui->autoSyncWithWindows->setEnabled(false);
        ui->autoSyncWithWindows->setToolTip("Enable Sync Power Scheme First !");
    }else{
        ui->syncPowerSchemeCheckBox->setEnabled(true);
        ui->autoSyncWithWindows->setEnabled(false);
        ui->autoSyncWithWindows->setToolTip("Enable Sync Power Scheme First !");
    }

// ================================================================================================================

    auto stats = monitor.getSystemStats();
    if(stats.gpus.size() >= 1) {
        auto gpu1 = stats.gpus[0];
        ui->gpuNameLabel->setToolTip(gpu1.name);
    }
    if(stats.gpus.size() >=2){
        auto gpu2 = stats.gpus[1];
        ui->gpu2NameLabel->setToolTip(gpu2.name);
    }
    ui->cpuNameLabel->setToolTip(stats.cpu.name);


// ---------------------- CONNECTING UI CLICKED BUTTON TO ACTUAL LOGIC --------------------------------------------

    ultSupport = monitor.isUltimateSupported();
    ultTried = false;

    if(!ultSupport){
        ui->ultPerformanceButton->setEnabled(false);
        ui->tryEnableUltimateButton->setVisible(true);
        ui->ultPerformanceButton->setToolTip("Press try enabling button to check for support!");
        if(!isAdmin){
            ui->tryEnableUltimateButton->setToolTip("Run as admin to try enabling!");
            ui->tryEnableUltimateButton->setEnabled(false);
        }else{
            ui->tryEnableUltimateButton->setEnabled(true);
        }
        ui->ultPerformanceActStatus->setText("(maybe supported, unchecked)");
    }else{
        ui->tryEnableUltimateButton->setVisible(false);
    }

    connect(ui->tryEnableUltimateButton, &QPushButton::clicked, this, [this](){
        ultTried = true;
        if(isAdmin){
            monitor.tryEnablingUltimateMode();
            bool check = monitor.isUltimateSupported();
            if(check){
                QMessageBox::information(this,"Success","Ultimate Peformance Mode Enabled!");
                ui->tryEnableUltimateButton->setVisible(false);
                ui->ultPerformanceButton->setEnabled(true);
                ui->ultPerformanceActStatus->setText("");
            }else{
                ui->tryEnableUltimateButton->setVisible(false);
                ui->ultPerformanceButton->setToolTip("Even after trying, your system still doesn't support ultimate performance!");
                ui->ultPerformanceButton->setEnabled(false);
                ui->ultPerformanceActStatus->setText("(unsupported, checked)");
            }
        }
    });

    connect(ui->ecoButton, &QPushButton::clicked, this, [this]() {
        changeMode("Eco");
    });

    connect(ui->balancedButton, &QPushButton::clicked, this, [this]() {
        changeMode("Balanced");
    });

    connect(ui->performanceButton, &QPushButton::clicked, this, [this]() {
        changeMode("Performance");
    });

    connect(ui->ultPerformanceButton, &QPushButton::clicked, this, [this]() {
        changeMode("UltimatePerformance");
    });

    connect(ui->syncPowerSchemeCheckBox, &QCheckBox::toggled, this, [this](bool checked){
        if(checked){
            ui->autoSyncWithWindows->setEnabled(true);
            ui->autoSyncWithWindows->setToolTip("");
        }else{
            ui->autoSyncWithWindows->setEnabled(false);
            ui->autoSyncWithWindows->setChecked(false);
            ui->autoSyncWithWindows->setToolTip("Enable Sync Power Scheme First !");
        }
    });

    connect(ui->autoSyncInfo, &QPushButton::clicked, this, [this](){
        QMessageBox autoSyncMsgBox;
        autoSyncMsgBox.setWindowTitle("Auto Sync Information");
        autoSyncMsgBox.setText("When this button is checked (enabled) this will sync the Windows Power"
                               " Scheme with the app every 3 seconds. If you make changes to the power schemes "
                               "using the control panel, it will reflect in the app too. Keep off to avoid "
                               "consuming more resources and if you are not going to change power schemes with any other way.");
        autoSyncMsgBox.addButton("Okay", QMessageBox::AcceptRole);
        autoSyncMsgBox.exec();
    });

    connect(ui->powerSchemeInfo, &QPushButton::clicked, this, [this](){
        QMessageBox powerSchemeMsgBox;
        powerSchemeMsgBox.setWindowTitle("Sync Power Scheme Information");
        powerSchemeMsgBox.setText("When this button is checked (enabled) it will sync the Window's Power Scheme with"
                                  " the app's power modes. To enable this button, you need to run this app As Admin!");
        powerSchemeMsgBox.addButton("Okay", QMessageBox::AcceptRole);
        powerSchemeMsgBox.exec();
    });

// ================================================================================================================

    QTimer *statsTimer = new QTimer(this);
    QTimer *syncSchemeTimer = new QTimer(this);
    connect (statsTimer, &QTimer:: timeout, this, &MainWindow::updateStats);
    connect(syncSchemeTimer, &QTimer::timeout, this, &MainWindow::autoSyncPowerScheme);
    statsTimer->start(3000);
    syncSchemeTimer->start(3000);
}

void MainWindow::updateStats()
{
    auto stats = monitor.getSystemStats();

    // ================= CPU =================
    ui->cpuNameLabel->setText(stats.cpu.name);

    ui->cpuTempLabel->setText(
        QString::number(stats.cpu.temp, 'f', 1) + " °C");

    ui->cpuUsageLabel->setText(
        QString::number(stats.cpu.usage, 'f', 1) + " %");

    if(stats.cpu.speed > 100) // avoid tiny/invalid values
        ui->cpuSpeedLabel->setText(QString::number(stats.cpu.speed, 'f', 0) + " MHz");
    else
        ui->cpuSpeedLabel->setText("--");

    // ================= GPU =================
    if(stats.gpus.size() >= 1){
        auto gpu1 = stats.gpus[0];

        ui->gpuNameLabel->setText(gpu1.name);
        ui->gpuTempLabel->setText(QString::number(gpu1.temp, 'f', 1) + " °C");
        ui->gpuUsageLabel->setText(QString::number(gpu1.usage, 'f', 1) + " %");

        if(gpu1.speed > 100)
            ui->gpuSpeedLabel->setText(QString::number(gpu1.speed, 'f', 0) + " MHz");
        else
            ui->gpuSpeedLabel->setText("--");
    }

    // ================= GPU 2 =================
    if(stats.gpus.size() >= 2){
        ui->gpu2GroupBox->setVisible(true);

        auto gpu2 = stats.gpus[1];

        ui->gpu2NameLabel->setText(gpu2.name);
        ui->gpu2TempLabel->setText(QString::number(gpu2.temp, 'f', 1) + " °C");
        ui->gpu2UsageLabel->setText(QString::number(gpu2.usage, 'f', 1) + " %");

        if(gpu2.speed > 100)
            ui->gpu2SpeedLabel->setText(QString::number(gpu2.speed, 'f', 0) + " MHz");
        else
            ui->gpu2SpeedLabel->setText("--");

    } else {
        ui->gpu2GroupBox->setVisible(false);
    }

    if(stats.gpus.isEmpty()){
        ui->gpuNameLabel->setText("No GPU detected");
    }
}

void MainWindow::updateModeUI(){

    QString ecoDefault = ":hover {border: 2px solid #096C17; border-radius: 8px;}";
    QString balancedDefault = ":hover {border: 2px solid #0A5D6B; border-radius: 8px;}";
    QString performanceDefault = ":hover {border: 2px solid #6E1708; border-radius: 8px;}";
    QString ultPerformanceDefault = ":hover {border: 2px solid #471093; border-radius: 8px;}";

    QString ecoSelected = "QPushButton {background-color: #11BF28; font-weight: bold}"
                          ":hover {border: 3px solid #096C17; border-radius: 8px;}";

    QString balancedSelected = "QPushButton {background-color: #12A9C4; font-weight: bold}"
                               ":hover {border: 3px solid #0A5D6B; border-radius: 8px;}";

    QString performanceSelected = "QPushButton {background-color: #D42B0F; font-weight: bold}"
                                  ":hover {border: 3px solid #6E1708; border-radius: 8px;}";

    QString ultPerformanceSelected = "QPushButton {background-color: #6918DB; font-weight: bold}"
                                  ":hover {border: 3px solid #471093; border-radius: 8px;}";


    ui->ecoButton->setStyleSheet(ecoDefault);
    ui->balancedButton->setStyleSheet(balancedDefault);
    ui->performanceButton->setStyleSheet(performanceDefault);
    ui->ultPerformanceButton->setStyleSheet(ultPerformanceDefault);

    if(monitor.getMode() == "Eco"){
        ui->ecoActStatus->setText("(active)");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("");
        if(!ultSupport){
            ui->ultPerformanceActStatus->setText("(Unsupported)");
        }else{
           ui->ultPerformanceActStatus->setText("");
        }
        ui->ecoButton->setStyleSheet(ecoSelected);

    }else if(monitor.getMode() == "Balanced"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("(active)");
        ui->performanceActStatus->setText("");
        if(!ultSupport){
            ui->ultPerformanceActStatus->setText("(Unsupported)");
        }else{
            ui->ultPerformanceActStatus->setText("");
        }
        ui->balancedButton->setStyleSheet(balancedSelected);

    }else if(monitor.getMode() == "Performance"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("(active)");
        if(!ultSupport){
            ui->ultPerformanceActStatus->setText("(Unsupported)");
        }else{
            ui->ultPerformanceActStatus->setText("");
        }
        ui->performanceButton->setStyleSheet(performanceSelected);
    }else if(monitor.getMode() == "UltimatePerformance"){
        ui->ecoActStatus->setText("");
        ui->balancedActStatus->setText("");
        ui->performanceActStatus->setText("");
        ui->ultPerformanceActStatus->setText("(active)");
        ui->ultPerformanceButton->setStyleSheet(ultPerformanceSelected);
    }
}

void MainWindow::changeMode(QString mode){

    if(mode == "UltimatePerformance" && !ultSupport){
        QMessageBox::information(this, "Not Supported", "Ultimate Performance Mode is not supported by your device!");
    }else{
        monitor.setMode(mode);
        ui->modeLabel->setText("Mode: " + mode);
        updateModeUI();
        if(ui->syncPowerSchemeCheckBox->isChecked() && isAdmin){
            monitor.applyPowerMode(mode);
            ui->modeLabel->setText("Mode: " + mode + " (synced)");
        }
    }
}

void MainWindow::autoSyncPowerScheme(){
    if(!(ui->syncPowerSchemeCheckBox->isChecked() && isAdmin)){
        return;
    }

    if(ui->autoSyncWithWindows->isChecked()){
        QString systemScheme = monitor.detectPowerMode();
        if(systemScheme != monitor.getMode()){
            monitor.setMode(systemScheme);
            ui->modeLabel->setText("Mode: " + systemScheme);
            updateModeUI();
        }
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
