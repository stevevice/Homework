//Steve Vice
//Matthew's Game Programing Class
//17 Aug 2015
//Conditional Statements --Excercise
#include <iostream>


int main ()
{
	int a;

	std::cout << "Write the number of the month you would like to know. ";
	std::cin >> a;

	switch (a) {
	case 1:
		std::cout << "The month you are referring to is January.";
		break;
	case 2:
		std::cout << "The month you are referring to is February.";
		break;
	case 3:
		std::cout << "The month you are referring to is March.";
		break;
	case 4:
		std::cout << "The month you are referring to is April.";
		break;
	case 5:
		std::cout << "The month you are referring to is May.";
		break;
	case 6:
		std::cout << "The month you are referring to is June.";
		break;
	case 7:
		std::cout << "The month you are referring to is July.";
		break;
	case 8:
		std::cout << "The month you are referring to is August.";
		break;
	case 9:
		std::cout << "The month you are referring to is September.";
		break;
	case 10:
		std::cout << "The month you are referring to is October.";
		break;
	case 11:
		std::cout << "The month you are referring to is November.";
		break;
	case 12:
		std::cout << "The month you are referring to is December.";
		break;
	}

	std::cin.get();
	return 0.
}