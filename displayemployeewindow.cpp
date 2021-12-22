#include "displayemployeewindow.h"
#include "ui_displayemployeewindow.h"
#include "employee.h"

DisplayEmployeeWindow::DisplayEmployeeWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayEmployeeWindow)
{
    ui->setupUi(this);
    addWorker = new AddWorkerWindow(employeeList);
  //  connect(addWorker, &AddWorkerWindow::displayEmployeeWindow, this, &AddWorkerWindow::show);

}

DisplayEmployeeWindow::~DisplayEmployeeWindow()
{
    delete ui;
}
/*void DisplayEmployeeWindow::on_pushButtonAddNewEmployee_clicked()
{
    this->close();
    addWorker -> show();
}
*/
void DisplayEmployeeWindow::on_pushButtonCancelWorkerDisplay_clicked()
{
    // Delete everything out of verticalField, otherwise it will be re-added
    // when we open this window again, thus leading to multiple entries of the
    // same people.
    QVBoxLayout *verticalField = this->findChild<QVBoxLayout*>("verticalLayout");
    QLayoutItem* vitem;
    while ((vitem = verticalField->takeAt(0)) != NULL) {
        QLayoutItem* item;
        while ((item = vitem->layout()->takeAt(0)) != NULL) {
            delete item->widget();
            delete item;
        }
        delete vitem->widget();
        delete vitem;
    }
    this->close();
    emit firstWindow();
}

