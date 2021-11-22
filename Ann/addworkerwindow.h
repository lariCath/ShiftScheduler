#ifndef ADDWORKERWINDOW_H
#define ADDWORKERWINDOW_H

#include <QMainWindow>
#include "manageemployee.h"

namespace Ui {
class AddWorkerWindow;
}

class AddWorkerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddWorkerWindow(ManageEmployee *employeeList, QMainWindow *parent = 0);
    ~AddWorkerWindow();

signals:
    void firstWindow();
public slots:
    void on_pushButtonAddEmployee_clicked();

private:
    Ui::AddWorkerWindow *ui;
    ManageEmployee *employeeList;
};

#endif // ADDWORKERWINDOW_H
