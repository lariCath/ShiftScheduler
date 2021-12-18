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
    string name;
    string time;

public:
    Shift(QDate d, Employee n, bool isMorningShift){
        date = d;
        name = n.GetName();

        if(isMorningShift){
        time = "morning";
        }else{
            time="evening";
        }
    };
};

#endif // SHIFT_H
