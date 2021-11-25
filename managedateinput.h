#ifndef MANAGEDATEINPUT_H
#define MANAGEDATEINPUT_H
#include <QDate>

using namespace std;

class ManageDateInput
{
private:
    QDate startDate;
    QDate endDate;
    QDate week[7];

public:
    void SetStartDate(QDate date){
        startDate = date;
    }

    QDate GetStartDate(){
        return startDate;
    }

    void SetEndDate(QDate date){
        endDate = date;
    }

    QDate GetEndDate(){
        return endDate;
    }

    void SetWeek(){
        for(QDate day=startDate; day<=endDate; day.addDays(1)){
            int i = 0;
            week[i] = day;
            i++;
        }
    }

    QDate* GetWeek(){
        return week;
    }

};

#endif // MANAGEDATEINPUT_H
