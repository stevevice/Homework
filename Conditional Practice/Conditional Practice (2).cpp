//Steve Vice
//Mat's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>

int main ()
{
	int x;
	int y;

	std::cout << "What number are you assigning into y? ";
	std::cin >> y;
	
	if (y == 0) {
		x = 100;
		std::cout << x << std::endl;
		std::cin.get();
	}
	else {
		std::cout << "You've broken the computer!";
		std::cin.get();
	}
	return 0;
}