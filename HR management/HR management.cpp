#include "PCH.h"
#include "Menu.h"

int main()
{
	// Start ->
	Menu m;
	char choice = 'n';
	do {
		system("cls");
		m.displayMenu();
		std::cout << "  Do you want to continue? (y/n) -> ";
		std::cin >> choice;
	} while (choice == 'y');
	// Finish ->
	std::cout << "\n> Programm finished (0_0) " << std::endl;
	return 0;
}