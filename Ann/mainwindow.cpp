#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    workerWindow = new AddWorkerWindow();
    connect(workerWindow, &AddWorkerWindow::firstWindow, this, &MainWindow::show);

    generateScheduleWindow = new GenerateScheduleWindow();
    connect(generateScheduleWindow, &GenerateScheduleWindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
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

