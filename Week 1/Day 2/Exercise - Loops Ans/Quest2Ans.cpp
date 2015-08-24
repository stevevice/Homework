//Steve Vice
//Matthews's Game Programing Class
//18 Aug 2015
// Loops- Excercise
#include <iostream>

int main()
{
	int i = 0;

	for (; i <= 100; i++)
	{
		std::cout << i << std::endl;

		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz";
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz";
		}

		else if (i % 5 == 0) {
			std::cout << "Buzz";
		}

		else {
			std::cout << "No mod";
		}
		
		std::cout << std::endl;
	}
	std::cin.get();
	return 0;

}