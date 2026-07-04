#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <windows.h>
#include <QCoreApplication>
#include <QMessageBox>
#include "manageadmin.h"
#include <QJsonDocument>
#include <QJsonObject>
#define APP_VERSION "v0.5"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->versionLabel->setText("Version: " APP_VERSION);
// ------------------------ EXTRACTING AND SYNCING CURRENT WINDOW'S POWER SCHEME ---------------------------------

    QString systemPowerScheme = monitor.getMode();
    QString systemOverlayMod = monitor.getOverlayMode();
    ui->powerOverlay->setText("Power Overlay: " + systemPowerScheme);
    ui->powerScheme->setText("Power Scheme: " + systemPowerScheme);
    ui->gpu2GroupBox->setVisible(false);
// ===============================================================================================================

// -------------- VERIFYING ADMIN, CHANGING ADMIN STATUS, ENABLE ADMIN BUTTON, ADMIN BUTTON FUNCTION -------------

    isAdmin = isRunningAsAdmin(); //Extracting function value into a variable

    if (isAdmin){
        ui->adminStatus->setText("Admin: 🟢");
    }else{
        ui->adminStatus->setText("Admin: 🔴");
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
    updateModeUI();
    updateOverlayUI();
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
            QTimer::singleShot(1000, this, [this](){   // wait 1 second before checking
                bool check = monitor.isUltimateSupported();
                ultSupport = check;
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
            });
        }
    });

    // POWER SCHEME SYNC WITH UI
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
    //=============================

    // POWER OVERLAY SYNC WITH UI
    connect(ui->BestEffOverlayButton, &QPushButton::clicked, this, [this]() {
        changeOverlayMode("Eco");
    });

    connect(ui->BalancedOverlayButton, &QPushButton::clicked, this, [this]() {
        changeOverlayMode("Balanced");
    });

    connect(ui->BestPerfOverlayButton, &QPushButton::clicked, this, [this]() {
        changeOverlayMode("Performance");
    });
    // =============================

// ================================================================================================================

    QTimer *statsTimer = new QTimer(this);
    QTimer *syncSchemeTimer = new QTimer(this);
    connect (statsTimer, &QTimer:: timeout, this, &MainWindow::updateStats);
    connect(&monitor, &HardwareMonitor::statsReady, this, &MainWindow::onStatsReady);
    statsTimer->start(3000);
    syncSchemeTimer->start(3000);
}

void MainWindow::updateOverlayUI(){
    QString ecoOverlayDefault = ":hover {border: 2px solid #096C17; border-radius: 8px;}";
    QString balancedOverlayDefault = ":hover {border: 2px solid #0A5D6B; border-radius: 8px;}";
    QString performanceOverlayDefault = ":hover {border: 2px solid #6E1708; border-radius: 8px;}";

    QString ecoOverlaySelected = "QPushButton {background-color: #11BF28; font-weight: bold}"
                          ":hover {border: 3px solid #096C17; border-radius: 8px;}";

    QString balancedOverlaySelected = "QPushButton {background-color: #12A9C4; font-weight: bold}"
                               ":hover {border: 3px solid #0A5D6B; border-radius: 8px;}";

    QString performanceOverlaySelected = "QPushButton {background-color: #D42B0F; font-weight: bold}"
                                  ":hover {border: 3px solid #6E1708; border-radius: 8px;}";

    ui->BestEffOverlayButton->setStyleSheet(ecoOverlayDefault);
    ui->BalancedOverlayButton->setStyleSheet(balancedOverlayDefault);
    ui->BestPerfOverlayButton->setStyleSheet(performanceOverlayDefault);


    ui->BestEffOverlayActStatus->setText("");
    ui->BalancedOverlayActStatus->setText("");
    ui->BestPerfOverlayActStatus->setText("");

    QString currentOverlay = monitor.getOverlayMode();
    if(currentOverlay == "Eco"){
        ui->BestEffOverlayActStatus->setText("(active)");
        ui->BalancedOverlayActStatus->setText("");
        ui->BestPerfOverlayActStatus->setText("");
        ui->BestEffOverlayButton->setStyleSheet(ecoOverlaySelected);
    }else if(currentOverlay == "Balanced"){
        ui->BestEffOverlayActStatus->setText("");
        ui->BalancedOverlayActStatus->setText("(active)");
        ui->BestPerfOverlayActStatus->setText("");
        ui->BalancedOverlayButton->setStyleSheet(balancedOverlaySelected);
    }else if(currentOverlay == "Performance"){
        ui->BestEffOverlayActStatus->setText("");
        ui->BalancedOverlayActStatus->setText("");
        ui->BestPerfOverlayActStatus->setText("(active)");
        ui->BestPerfOverlayButton->setStyleSheet(performanceOverlaySelected);
    }
}

void MainWindow::updateStats()
{
    monitor.fetchStatsAsync();
}

void MainWindow::onStatsReady(HardwareMonitor::SystemStats stats)
{
    // ================= CPU =================
    ui->cpuNameLabel->setText(stats.cpu.name);

    ui->cpuTempLabel->setText(
        QString::number(stats.cpu.temp, 'f', 1) + " °C");

    ui->cpuUsageLabel->setText(
        QString::number(stats.cpu.usage, 'f', 1) + " %");

    if(stats.cpu.speed > 100)
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
// ++++++++++++++ UI FOR BUTTONS - SCHEME **********************
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


// ++++++++++++++ UI FOR BUTTONS - SCHEME **********************

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

void MainWindow::changeOverlayMode(QString mode){
    monitor.applyPowerOverlay(mode);
    monitor.setOverlayMode(mode);
    updateOverlayUI();
    if(mode == "Eco"){
        ui->powerOverlay->setText("Power Overlay: Best Efficiency");
    }else if(mode == "Balanced"){
        ui->powerOverlay->setText("Power Overlay: Balanced");
    }else if(mode == "Performance"){
        ui->powerOverlay->setText("Power Overlay: Best Performance");
    }
}

void MainWindow::changeMode(QString mode){
    if(mode == "UltimatePerformance" && !ultSupport){
        QMessageBox::information(this, "Not Supported", "...");
    }else{
        monitor.setMode(mode);
        ui->powerScheme->setText("Power Scheme: " + mode);
        updateModeUI();
        updateOverlayUI();
        if(isAdmin){
            monitor.applyPowerMode(mode);
            ui->powerScheme->setText("Power Scheme: " + mode );
        }
    }
}



MainWindow::~MainWindow()
{
    delete ui;
}
