#include <iostream>
int main()
{
    int number;
    int total = 0;
    std::cout << "enter number :";
    std::cin >> number;

    while(number != 0)
    {
        total = total + number;
        number = number -1;

    }
    std::cout << "total is :";
    std::cout << total;
} 