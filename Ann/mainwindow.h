#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <addworkerwindow.h>
#include <generateschedulewindow.h>

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
};

#endif // MAINWINDOW_H
