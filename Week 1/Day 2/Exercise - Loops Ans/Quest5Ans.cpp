//Steve Vice
//Matthews's Game Programing Class
//18 Aug 2015
// Loops- Excercise
#include <iostream>

int main()
{
	int i = (-1);

	while (i <= 99)
	{
		i++;
		std::cout << i << std::endl;

		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz" << std::endl;
		}

		else if (i % 5 == 0) {
			std::cout << "Buzz" << std::endl;
		}

		else {
		
		}

		std::cout << std::endl;
	}
	std::cin.get();
	return 0;
}