#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
using namespace std;


class Employee
{
private:
    QString name;
    int workload;

public:
    int notPlannedWorkLoad;

    Employee(QString name, int workload) {
        this->name = name;
        this->workload = workload;
        notPlannedWorkLoad = workload;
    }

    QString GetName() {
        return name;
    }

    int GetWorkload(){
        return workload;
    }

    void hoursPlanned(int planned){
        notPlannedWorkLoad -= planned;
    }

};

#endif // EMPLOYEE_H
