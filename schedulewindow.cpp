#include "schedulewindow.h"
#include "ui_schedulewindow.h"

ScheduleWindow::ScheduleWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ScheduleWindow)
{
    ui->setupUi(this);
}

ScheduleWindow::~ScheduleWindow()
{
    delete ui;
}

void ScheduleWindow::on_pushButtonCancel_clicked()
{
    this->close();
    emit generateScheduleWindow();
   // generateScheduleWindow->open();
}
