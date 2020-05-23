#pragma once
#include "PCH.h"
#include "Employee.h"

class Company : public Employee
{
protected:
	std::string nameOfCompany;
	std::vector<Employee> employees;
public:
	Company();
	Company(std::string nameOfCompany);
	void displayCompany() const;
	void addEmployee(Employee &e);
	void deleteEmployee(std::string name);
	void changeSalary(Employee &e, double salary, std::string name);
	std::vector<Employee>::iterator searchByName(std::string name);
};

