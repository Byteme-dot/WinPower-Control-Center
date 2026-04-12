#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "hardwaremonitor.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    HardwareMonitor monitor;
    bool ultTried;
    bool ultSupport;
    void autoSyncPowerScheme();
    void updateStats();
    void changeMode(QString);
    Ui::MainWindow *ui;
    bool isAdmin;
    void updateModeUI();
    int cpuUsage;
    int gpuUsage;
    int cpuSpeed;
    int gpuSpeed;
    int targetCpuTemp;
    int targetGpuTemp;
    int targetCpuFan;
    int targetGpuFan;
    int cpuTempDisplay = 0;
    int gpuTempDisplay = 0;
    int cpuFanDisplay = 0;
    int gpuFanDisplay = 0;
};
#endif // MAINWINDOW_H
