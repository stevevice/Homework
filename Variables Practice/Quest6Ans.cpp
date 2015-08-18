//Steve Vice
//Matthews's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>

int main()
{
	int a, b, c, d, e, sum;

	std::cout << "First Number: ";
	std::cin >> a;
	std::cout << "Second Number: ";
	std::cin >> b;
	std::cout << "Third Number: ";
	std::cin >> c;
	std::cout << "Fourth Number: ";
	std::cin >> d;
	std::cout << "Fifth Number: ";
	std::cin >> e;

	sum = a + b + c + d + e;
	sum = sum / 5;

	std::cout << "The mean is " << sum;
	std::cin.get();

	std::cin.get();
	return 0;

}