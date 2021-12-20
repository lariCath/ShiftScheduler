#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <addworkerwindow.h>
#include <generateschedulewindow.h>
#include "manageemployee.h"
#include "managedateinput.h"
#include "shift.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAddNewEmployee_clicked();
    void on_pushButtonCreateNewSchedule_clicked();

private:
    Ui::MainWindow *ui;
    AddWorkerWindow *workerWindow;
    GenerateScheduleWindow *generateScheduleWindow;
    ManageEmployee *employeeList;
    ManageDateInput *shiftdates;
    Shift *shifts;
};

#endif // MAINWINDOW_H
