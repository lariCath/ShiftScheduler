#ifndef SCHEDULEWINDOW_H
#define SCHEDULEWINDOW_H

#include <QDialog>
//#include<generateschedulewindow.h>

namespace Ui {
class ScheduleWindow;
}

class ScheduleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ScheduleWindow(QDialog *parent = 0);
    ~ScheduleWindow();

signals:
    void generateScheduleWindow();
private slots:
    void on_pushButtonCancel_clicked();

private:
    Ui::ScheduleWindow *ui;
    //GenerateScheduleWindow *generateScheduleWindow;
};
#endif // SCHEDULEWINDOW_H
