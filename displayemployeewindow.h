#ifndef DISPLAYEMPLOYEEWINDOW_H
#define DISPLAYEMPLOYEEWINDOW_H
#include <QMainWindow>
#include <addworkerwindow.h>

class AddWorkerWindow;
class ManageEmployee;
namespace Ui {
    class DisplayEmployeeWindow;
}

class DisplayEmployeeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayEmployeeWindow(QMainWindow *parent = 0);
    ~DisplayEmployeeWindow();
signals:
    void firstWindow();
    void addWorkerWindow();
public slots:
 //   void on_pushButtonAddNewEmployee_clicked();
    void on_pushButtonCancelWorkerDisplay_clicked();

private:
    Ui::DisplayEmployeeWindow *ui;
    AddWorkerWindow *addWorker;
    ManageEmployee *employeeList;
    //ManageEmployee *employeeList;
};
#endif // DISPLAYEMPLOYEEWINDOW_H
