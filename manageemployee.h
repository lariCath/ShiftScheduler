#ifndef MANAGEEMPLOYEE_H
#define MANAGEEMPLOYEE_H

#include <QList>
#include "employee.h"
using namespace std;

class ManageEmployee
{
private:
    QList<Employee> employees;


public:
    ManageEmployee() {
        Employee boss("boss", 9999);
        employees.push_back(boss);
    }
    void AddEmployee(QString name, int workload) {
        Employee employee(name, workload);
        // push front so that Boss is the last employee to be chosen and not the first
        employees.push_front(employee);
    }

    QList<Employee> GetList() {
        return employees;
    }

    QString GetNames(){
        QString names;
        for (Employee &e : employees){
            names.append(e.GetName());
            names.append("\n");
        }
        return names;
    }
};

#endif // MANAGEEMPLOYEE_H
