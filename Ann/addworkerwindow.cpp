#include "addworkerwindow.h"
#include "ui_addworkerwindow.h"

AddWorkerWindow::AddWorkerWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::AddWorkerWindow)
{
    ui->setupUi(this);
}

AddWorkerWindow::~AddWorkerWindow()
{
    delete ui;
}

void AddWorkerWindow::on_pushButtonAddEmployee_clicked()
{
    this->close();
    emit firstWindow();
}
