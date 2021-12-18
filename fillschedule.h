#ifndef FILLSCHEDULE_H
#define FILLSCHEDULE_H

#include <QDate>
#include <list>
#include "employee.h"
#include "shift.h"
#include "iterator"

using namespace std;

class FillSchedule
{
private:
    QDate week[7];
    list<Employee> employeeList;
    list<Shift> shifts;

    //check current employye has enought workload for another shift
    void CheckFreeWorkload(Employee e){

        if(e.GetWorkload() < 6){
            advance(e, 1); //next employee
        }
    }

public:

    FillSchedule(QDate dates[7], list<Employee> employees){

        for(int i = 0; i< 7; i++){
            week[i] = dates[i];
        }

        employeeList = employees;
    }

    void Make(){

        list<Employee>::iterator it = employeeList.begin(); //get first employee in list

        for(int i = 0; i < 7; i++){

            CheckFreeWorkload(*it);

            Shift morning(week[i], *it, true); //make morning shift
            shifts.push_back(morning);

            CheckFreeWorkload(*it);

            Shift evening(week[i], *it, false); //make evening shift
            shifts.push_back(evening);
        }
    }

    list<Shift> GetShifts(){
        return shifts;
    }
};

#endif // FILLSCHEDULE_H
