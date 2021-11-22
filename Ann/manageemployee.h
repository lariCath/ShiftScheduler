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
    void AddEmployee(string name) {
        Employee employee(name);
        employees.push_back(employee);
    }

    list<Employee> GetList() {
        return employees;
    }
};

#endif // MANAGEEMPLOYEE_H
