//Steve Vice
//Matthew's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>


int main ()
{
	int x;

	std::cout << "What number is your choice? ";
	std::cin >> x;

	switch (x) {
	case 1:
		std::cout << "1";
		std::cin.get();
		break;
	case 2:
	case 3:
		std::cout << "2 or 3";
		std::cin.get();
		break;
	case 4:
		std::cout << "4";
		std::cin.get();
		break;
	default:
		std::cout << "Invalid";
		std::cin.get();
		break;
	}
	std::cin.get();
	return 0;
}