//Steve Vice
//Matthews's Game Programing Class
//18 Aug 2015
// Loops- Excercise
#include <iostream>

int main()
{
	int i = 0;
	int sum= 0;

	while (i <= 999)
	{
		i++;
		std::cout << i << std::endl;

		if (i % 3 == 0 && i % 5 == 0) {
			sum= i+ sum;
		}
		else if (i % 3 == 0) {
			sum = i + sum;
		}

		else if (i % 5 == 0) {
			sum = i + sum;
		}

		else {
			sum = i + sum;
		}
		
		std::cout << std::endl;
	}

	std::cout << sum;

	std::cin.get();
	return 0;

}