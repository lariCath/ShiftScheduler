#include "generateschedulewindow.h"
#include "ui_generateschedulewindow.h"
#include <iostream>
#include "managedateinput.h"

GenerateScheduleWindow::GenerateScheduleWindow(ManageDateInput *shiftdates, QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::GenerateScheduleWindow),
    shiftdates(shiftdates)
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
    QDateEdit *date1Field = this->findChild<QDateEdit*>("dateEdit");
    QDateEdit *date2Field = this->findChild<QDateEdit*>("dateEdit_2");
    assert(date1Field);
    assert(date2Field);
    shiftdates->SetStartDate(date1Field->date());
    shiftdates->SetEndDate(date2Field->date());


    std::cout << "----------------------" << shiftdates->GetStartDate().toString().toStdString() << std::endl;
    std::cout << "----------------------" << shiftdates->GetEndDate().toString().toStdString() << std::endl;
    this->close();
    scheduleWindow -> open();
}

void GenerateScheduleWindow::on_pushButtonCancel_clicked()
{
    this->close();
    emit firstWindow();
}
