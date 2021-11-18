#pragma once
#include <list>
#include "Employee.h"
using namespace std;

class ManageEmployees
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

