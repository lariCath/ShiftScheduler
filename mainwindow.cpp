#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>
#include <QTextStream>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    employeeList = new ManageEmployee();
    shiftdates = new ManageDateInput();
    workerWindow = new AddWorkerWindow(employeeList);
    connect(workerWindow, &AddWorkerWindow::firstWindow, this, &MainWindow::show);

    generateScheduleWindow = new GenerateScheduleWindow(shiftdates, employeeList);
    connect(generateScheduleWindow, &GenerateScheduleWindow::firstWindow, this, &MainWindow::show);

    displayEmployeeWindow = new DisplayEmployeeWindow();
    connect(displayEmployeeWindow, &DisplayEmployeeWindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete employeeList;
}

void MainWindow::on_pushButtonAddNewEmployee_clicked()
{
    workerWindow->show();
    this->close();
}

void MainWindow::on_pushButtonCreateNewSchedule_clicked()
{
    generateScheduleWindow->show();
    this->close();
}

void MainWindow::on_pushButtonShowAllEmployees_clicked()
{
    displayEmployeeWindow->show();

    QVBoxLayout *verticalField = displayEmployeeWindow->findChild<QVBoxLayout*>("verticalLayout");
    assert(verticalField);
    QFont font;
    font.setPixelSize(20);
    for(Employee &e : employeeList->GetList()){
        // Those widgets will be deleted when the displayEmployeeWindow is closed.
        QHBoxLayout *horizontalField = new QHBoxLayout();
        QString h;
        QTextStream(&h) << e.GetWorkload() << " h";
        QLabel *hours = new QLabel(h);
        hours->setFont(font);
        horizontalField->addWidget(hours);

        QLabel *name = new QLabel(e.GetName());
        name->setFont(font);
        horizontalField->addWidget(name);

        verticalField->addLayout(horizontalField);
    }
    this->close();
}
