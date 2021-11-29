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

    Employee(string name, int workload) {
        this->name = name;
        this->workload = workload;
    }

    string GetName() {
        return name;
    }

    int GetWorkload(){
        return workload;
    }

};

#endif // EMPLOYEE_H
