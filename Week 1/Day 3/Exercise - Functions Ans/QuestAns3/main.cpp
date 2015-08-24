#include <iostream>

//i literally cant tell where the problem is

void SmallerNumber(float num1, float num2, float smallNum)
{
    if(num1 <= num2)
    {
        smallNum = num1;
    }
    else
    {
        smallNum = num2;
    }
}

void SmallerNumber(float smallNum)
{
    std::cout << "The smaller number is: " << smallNum;
}

int main()
{
    float num1, num2, smallNum;

    std::cout << "Enter value 1: ";
    std::cin >> num1;
    std::cout << "Enter value 2: ";
    std::cin >> num2;

    SmallerNumber(num1, num2, smallNum);
    {
        SmallerNumber(smallNum);
    }

    return 0;
}
