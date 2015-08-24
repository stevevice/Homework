#include <iostream>

void SmallerNumber(float num1, float num2)
{
    if(num1 <= num2)
    {
        std::cout << "The smaller number is: " << num1;
    }
    else
    {
        std::cout << "The smaller number is: " << num2;
    }
}


int main()
{
    float num1, num2, smallNum;

    std::cout << "Enter value 1: ";
    std::cin >> num1;
    std::cout << "Enter value 2: ";
    std::cin >> num2;

  SmallerNumber(num1, num2);

    std::cin.get();
    return 0;
}
