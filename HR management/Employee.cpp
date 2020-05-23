#include "Employee.h"

Employee::Employee() 
	: name("undef.name"), surname("undef.surname"), typeOfWork("undef.type"), age(0), salary(0.0)
{
}

Employee::Employee(std::string name, std::string surname, std::string typeOfWork, int age, double salary)
	: name(name), surname(surname), typeOfWork(typeOfWork), age(age), salary(salary)
{
}

void Employee::displayEmployee() const
{
	std::cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
	std::cout << "  > " << name << "  " << surname << std::endl;
	std::cout << "  Type of work -> " << typeOfWork << std::endl;
	std::cout << "  Age -> " << age << " years old" << std::endl;
	std::cout << "  Salary -> " << salary << " $" << std::endl;
}
