//Steve Vice
//Matthew's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>


int main ()
{
	int a, b, c;
	int sign;

	std::cout << "1. Add" << std::endl;
	std::cout << "2. Subtract" << std::endl;
	std::cout << "3. Multiply" << std::endl;
	std::cout << "4. Divide" << std::endl;
	std::cout << "5. Remainder" << std::endl << std::endl;

	std::cout << "What is your first number? ";
	std::cin >> a;
	std::cout << std::endl << "Please tell me if you would either like to find the remainder, sum, difference, product or quotient of the problem with the number written here: ";
	std::cin >> sign;
	std::cout << "What is your second number? ";
	std::cin >> b;

	if (sign == 1) {
		c = a + b;
		std::cout << "The answer is " << c << std::endl;
		std::cin.get();
	}
	else if (sign == 2) {
		c = a - b;
		std::cout << "The answer is " << c << std::endl;
		std::cin.get();
	}
	else if (sign == 4) {
		c = a / b;
		std::cout << "The answer is " << c << std::endl;
		std::cin.get();
	}
	else if (sign == 3) {
		c = a * b;
		std::cout << "The answer is " << c << std::endl;
		std::cin.get();
	}
	else if (sign == 5) {
		c = a % b;
		std::cout << "The answer is " << c << std::endl;
		std::cin.get();
	}
	else {
		std::cout << "You screwed it up!" << std::endl;
		std::cin.get();
	}

	std::cin.get();
	return 0;
}