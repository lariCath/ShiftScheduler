#include "addworkerwindow.h"
#include "ui_addworkerwindow.h"
#include "employee.h"
#include <iostream>

AddWorkerWindow::AddWorkerWindow(ManageEmployee *employeeList, QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::AddWorkerWindow),
    employeeList(employeeList)
{
    ui->setupUi(this);
}

AddWorkerWindow::~AddWorkerWindow()
{
    delete ui;
}

void AddWorkerWindow::on_pushButtonAddEmployee_clicked()
{
    QLineEdit *nameField = this->findChild<QLineEdit*>("employeeNameField");
    QSpinBox *workField = this->findChild<QSpinBox*>("EmployeeWorkloadSpinBox");
    assert(nameField);
    assert(workField);
    employeeList->AddEmployee(nameField->displayText().toStdString(),workField->value());
    for (auto &employee : employeeList->GetList()) {
        std::cout << "----------------------" << employee.GetName() << employee.GetWorkload() << std::endl;
    }
    this->close();
    emit firstWindow();
}
