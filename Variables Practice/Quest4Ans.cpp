//Steve Vice
//Matthews's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "Input the number you want for a. ";
	std::cin >> a;
	std::cout << std::endl << "Input the number you want for b. ";
	std::cin >> b;
	std::cout << "The numbers are a- " << a << " and b- " << b << std::endl;

	c = a;
	a = b;
	b = c;

	std::cout << "The switched numbers are a- " << a << " and b- " << b << std::endl;

	std::cin.get();
	return 0; 
}