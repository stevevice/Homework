//Steve Vice
//Matthew's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>


int main ()
{
	int x, y;

	std::cout << "Write the number you want x to be." << std::endl;
	std::cout << "x = ";
	std::cin >> x;

	std::cout << "Write the number you want y to be." << std::endl;
	std::cout << "y = ";
	std::cin >> y;

	if (x > y) {
		std::cout << "x is the largest number and its number is " << x;
		std::cin.get();
	}
	else {
		std::cout << "y is the largest number and its number is " << y;
		std::cin.get();
	}

	std::cin.get();
	return 0;
}