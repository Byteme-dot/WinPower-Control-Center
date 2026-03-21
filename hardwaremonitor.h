#ifndef HARDWAREMONITOR_H
#define HARDWAREMONITOR_H

#include <QObject>

class HardwareMonitor : public QObject
{
    Q_OBJECT

public:
    explicit HardwareMonitor(QObject *parent = nullptr);
    QString currentMode = "Balanced";
    int getCpuTemp();
    int getGpuTemp();
    int getCpuFan();
    int getGpuFan();
    void setMode(QString);
    QString getMode();
    void applyPowerMode(QString);
};

#endif
