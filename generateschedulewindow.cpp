#include "generateschedulewindow.h"
#include "ui_generateschedulewindow.h"

GenerateScheduleWindow::GenerateScheduleWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::GenerateScheduleWindow)
{
    ui->setupUi(this);
    scheduleWindow = new ScheduleWindow();
    connect(scheduleWindow, &ScheduleWindow::generateScheduleWindow, this, &ScheduleWindow::show);
}

GenerateScheduleWindow::~GenerateScheduleWindow()
{
    delete ui;
}

void GenerateScheduleWindow::on_pushButtonCreateSchedule_clicked()
{
    this->close();
    scheduleWindow -> open();
}

void GenerateScheduleWindow::on_pushButtonCancel_clicked()
{
    this->close();
    emit firstWindow();
}
