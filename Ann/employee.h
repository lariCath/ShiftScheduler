#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;


class Employee
{
private:
    string name;

public:

    Employee(string name) {
        this->name = name;
    }

    string GetName() {
        return name;
    }

};

#endif // EMPLOYEE_H
