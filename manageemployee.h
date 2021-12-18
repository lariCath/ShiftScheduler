#ifndef MANAGEEMPLOYEE_H
#define MANAGEEMPLOYEE_H

#include <list>
#include "employee.h"
using namespace std;

class ManageEmployee
{
private:
    list<Employee> employees;


public:
    void AddEmployee(string name, int workload) {
        Employee employee(name, workload);
        employees.push_back(employee);
    }

    list<Employee> GetList() {
        Employee boss("boss", 9999);
        return employees;
    }
};

#endif // MANAGEEMPLOYEE_H
