#ifndef HARDWAREMONITOR_H
#define HARDWAREMONITOR_H

#include <QObject>

class HardwareMonitor : public QObject
{
    Q_OBJECT

public:
    explicit HardwareMonitor(QObject *parent = nullptr);
    QString currentMode;
    int getCpuTemp();
    int getGpuTemp();
    int getCpuFan();
    int getGpuFan();
    void setMode(QString);
    bool isUltimateSupported();
    QString getMode();
    void applyPowerMode(QString);
    QString detectPowerMode();
    void tryEnablingUltimateMode();
};

#endif
