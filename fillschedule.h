#ifndef FILLSCHEDULE_H
#define FILLSCHEDULE_H

#include <QDate>
#include <QList>
#include "employee.h"
#include "shift.h"
#include "iterator"

using namespace std;

class FillSchedule
{
private:
    QDate week[7];
    QList<Employee> employeeList;
    QList<Shift> shifts;
    int counter;

    //check current employye has enought workload for another shift
    void CheckFreeWorkloadForEvening(Employee e){

        if(e.notPlannedWorkLoad < 6){
            counter++;
        }
    }

    void CheckFreeWorkloadForMorning(Employee e){

        if(e.notPlannedWorkLoad < 4){
            counter++;
        }
    }

public:

    FillSchedule(QDate dates[7], QList<Employee> employees){

        for(int i = 0; i< 7; i++){
            week[i] = dates[i];
        }

        employeeList = employees;
        counter = 0;
    }

    void Make(){

        for(int i = 0; i < 7; i++){

            CheckFreeWorkloadForMorning(employeeList[counter]);

            Shift morning(week[i], employeeList[counter], true);
            employeeList[counter].hoursPlanned(4);
            shifts.push_back(morning);

            CheckFreeWorkloadForEvening(employeeList[counter]);

            Shift evening(week[i], employeeList[counter], false);
            employeeList[counter].hoursPlanned(6);
            shifts.push_back(evening);
        }
    }

    QList<Shift> GetShifts(){
        return shifts;
    }
};

#endif // FILLSCHEDULE_H
