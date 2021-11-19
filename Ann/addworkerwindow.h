#ifndef ADDWORKERWINDOW_H
#define ADDWORKERWINDOW_H

#include <QMainWindow>

namespace Ui {
class AddWorkerWindow;
}

class AddWorkerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddWorkerWindow(QMainWindow *parent = 0);
    ~AddWorkerWindow();

signals:
    void firstWindow();
private slots:
    void on_pushButtonAddEmployee_clicked();

private:
    Ui::AddWorkerWindow *ui;
};

#endif // ADDWORKERWINDOW_H
