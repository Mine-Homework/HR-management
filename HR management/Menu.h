#pragma once
#include "PCH.h"
#include "Employee.h"
#include "Company.h"

class Menu : public Company//, public Employee
{
public:
	void menu();
	void displayMenu();
};

