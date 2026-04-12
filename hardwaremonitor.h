#ifndef HARDWAREMONITOR_H
#define HARDWAREMONITOR_H

#include <QObject>
#include <QString>
#include <QList>

class HardwareMonitor : public QObject
{
    Q_OBJECT

public:
    explicit HardwareMonitor(QObject *parent = nullptr);
    struct CpuStats {
        QString name;
        double temp = 0;
        double speed = 0;
        double usage = 0;
        double fan = 0;
    };

    struct GpuStats {
        QString name;
        double temp = 0;
        double speed = 0;
        double usage = 0;
        double fan = 0;
    };

    struct SystemStats {
        CpuStats cpu;
        QList<GpuStats> gpus;
    };
    QString currentMode;
    SystemStats getSystemStats();
    void setMode(QString);
    bool isUltimateSupported();
    QString getMode();
    int getCpuTemp();
    int getCpuFan();
    int getGpuTemp();
    int getGpuFan();
    void applyPowerMode(QString);
    QString detectPowerMode();
    void tryEnablingUltimateMode();


};

#endif
