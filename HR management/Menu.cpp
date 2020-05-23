#include "Menu.h"

Company c;
Employee e;

void Menu::menu()
{
	std::cout << "\n 1 -> Add employee" << std::endl;
	std::cout << " 2 -> Delete employee" << std::endl;
	std::cout << " 3 -> Change salary of the employee" << std::endl;
	std::cout << " 4 -> Show company and employees" << std::endl;
	std::cout << "=====================================" << std::endl;
}

void Menu::displayMenu()
{
	std::string empname;
	std::string nameCompany;
	double salary;
	std::cout << "\n   .....Welcome to management center....." << std::endl;
	menu();
	int choice;
	std::cout << "\n > Input what do you want to do: ";
	std::cin >> choice;
	if (choice > 0 && choice < 6)
	{
		switch (choice)
		{
		case 1:
			c.addEmployee(e);
			break;
		case 2:
			//if (employees.empty()) {
			//	std::cout << " > Not any employees in company now" << std::endl;
			//}
			//else {     IT DOESN'T WORK! (
				std::cout << "  Input name -> ";
				std::cin >> empname;
				c.deleteEmployee(empname);
			//} 
			break;
		case 3:
			//if (employees.empty())
			//	std::cout << " > Not any employees in company now" << std::endl;
			//else {     IT DOESN'T WORK! (
				std::cout << "  Input name -> ";
				std::cin >> empname;
				std::cout << "  Input salary -> ";
				std::cin >> salary;
				c.changeSalary(e, salary, empname);
			//}
			break;
		case 4:
			c.displayCompany();
			break;
		}
	}
	else {
		std::cout << "\n  YOU INPUT INCORRECT NUMBER! " << std::endl;
	}

}
