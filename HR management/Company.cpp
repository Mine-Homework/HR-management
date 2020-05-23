#include "Company.h"

Company::Company() : nameOfCompany("IT Step")
{
}
Company::Company(std::string nameOfCompany)
	: nameOfCompany(nameOfCompany)
{
}

void Company::displayCompany() const
{
	std::cout << "\n  Company: " << nameOfCompany << std::endl;
	std::cout << "  The number of employees: " << employees.size() << std::endl;
	std::cout << "  List of employees -> " << std::endl;
	for (int i = 0; i < employees.size(); i++)
	{
		employees[i].displayEmployee();
	}
	std::cout << std::endl;
}

void Company::addEmployee(Employee &e)
{
	std::cout << "\n  > Input: " << std::endl;
	std::cout << " Name -> ";
	std::cin >> e.name;
	std::cout << " Surname -> ";
	std::cin >> e.surname;
	std::cout << " Type of work -> ";
	std::cin >> e.typeOfWork;
	std::cout << " Age -> ";
	std::cin >> e.age;
	std::cout << " Salary -> ";
	std::cin >> e.salary;
	employees.push_back(e);
}

void Company::deleteEmployee(std::string name)
{
	for (int i = 0; i < employees.size(); i++)
	{
		if (searchByName(name) == employees.end()) {
			std::cout << "\n Employee with that name doesn't exist!" << std::endl;
			break;
		}
		else {
			employees.erase(searchByName(name));
			std::cout << "\n> Employee " << name << " - successfully deleted!" << std::endl;
		}
	}
}

void Company::changeSalary(Employee &e, double salary, std::string name)
{
	for (int i = 0; i < employees.size(); i++)
	{
		if (employees[i].name == name)
		{
			employees[i].salary = salary;
			std::cout << " The salary of " << name << " was successful! " << std::endl;
		}
	}
}


std::vector<Employee>::iterator Company::searchByName(std::string name)
{
	std::vector<Employee>::iterator iter;
	for (iter = employees.begin(); iter != employees.end(); iter++) {
		if ((*iter).getName() == name) {
			break;
		}
	}
	return iter;
}
