#pragma once
#include "PCH.h"

class Employee
{
protected:
	std::string name;
	std::string surname;
	std::string typeOfWork;
	int age;
	double salary;
public:
	Employee();
	Employee(std::string name, std::string surname, std::string typeOfWork, int age, double salary);
	void displayEmployee() const;
};

