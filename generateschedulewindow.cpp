#include "generateschedulewindow.h"
#include "fillschedule.h"
#include "ui_generateschedulewindow.h"
#include <iostream>


GenerateScheduleWindow::GenerateScheduleWindow(ManageDateInput *shiftdates, ManageEmployee *employee_list, QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::GenerateScheduleWindow),
    shiftdates(shiftdates),
    employee_list(employee_list)
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
    shiftdates->SetWeek();
    FillSchedule schedule = FillSchedule(shiftdates->GetWeek(), employee_list->GetList());
    schedule.Make();
    savetocsv(shiftdates, schedule.GetMorningShifts(), schedule.GetEveningShifts());

    std::cout << "----------------------" << shiftdates->GetStartDate().toString().toStdString() << std::endl;
    std::cout << "----------------------" << shiftdates->GetEndDate().toString().toStdString() << std::endl;
    this->close();
    //scheduleWindow -> open();
}

void GenerateScheduleWindow::on_pushButtonCancel_clicked()
{
    this->close();
    emit firstWindow();
}
