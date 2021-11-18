#pragma once
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

