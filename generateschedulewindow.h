#ifndef GENERATESCHEDULEWINDOW_H
#define GENERATESCHEDULEWINDOW_H

#include <QMainWindow>
#include <schedulewindow.h>
#include "managedateinput.h"
#include "createschedule.h"

namespace Ui {
class GenerateScheduleWindow;
}

class GenerateScheduleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GenerateScheduleWindow(ManageDateInput *shiftdates, QMainWindow *parent = 0);
    ~GenerateScheduleWindow();

signals:
    void firstWindow();
private slots:
    void on_pushButtonCreateSchedule_clicked();
    void on_pushButtonCancel_clicked();

private:
    Ui::GenerateScheduleWindow *ui;
    ScheduleWindow *scheduleWindow;
    ManageDateInput *shiftdates;
};
#endif // GENERATESCHEDULEWINDOW_H
