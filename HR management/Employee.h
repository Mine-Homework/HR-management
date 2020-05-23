#pragma once
#include "PCH.h"

class Employee
{
public: // If = protected -> unable to access in method Company(addEmployee)
	std::string name;
	std::string surname;
	std::string typeOfWork;
	int age;
	double salary;
public:
	Employee();
	Employee(std::string name, std::string surname, std::string typeOfWork, int age, double salary);
	void displayEmployee() const;
	std::string getName();
	double getSalary();
};

