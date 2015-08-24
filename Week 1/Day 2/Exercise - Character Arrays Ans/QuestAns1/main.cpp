#include <iostream>

int main()
{
    //Create a program that asks for the user’s first and last name and store it in one string. It must be able to handle spaces in the input.

    char nameFir [20];
    char nameLast [20];

    std::cout << "Please Input your first name. " << std::endl;
    std::cin >> nameFir;
    std::cout << "Please Input your last name. " << std::endl;
    std::cin >> nameLast;

    std::cout << "Your Name is " << nameFir << " " << nameLast;

    //couldn't find a way to enter in a space if a person had 2 first names

    std::cin.get();
    return 0;
}
