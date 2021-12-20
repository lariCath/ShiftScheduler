#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;


class Employee
{
private:
    string name;
    int workload;

public:
    int notPlannedWorkLoad;

    Employee(string name, int workload) {
        this->name = name;
        this->workload = workload;
        notPlannedWorkLoad = workload;
    }

    string GetName() {
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
