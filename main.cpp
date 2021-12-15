#include "mainwindow.h"

#include <QApplication>
class ScheduleWindow;
int main(int argc, char *argv[])
{
    QIcon::setFallbackSearchPaths(QIcon::fallbackSearchPaths() << ":icons");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
