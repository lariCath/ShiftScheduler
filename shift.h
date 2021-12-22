#ifndef SHIFT_H
#define SHIFT_H

#include <QDate>
#include <string>
#include <employee.h>

using namespace std;

class Shift
{
private:
    QDate date;
    QString name;

public:
    Shift(QDate d, Employee n){
        date = d;
        name = n.GetName();
    };

    QString GetName() {
        return name;
    }
};

#endif // SHIFT_H
