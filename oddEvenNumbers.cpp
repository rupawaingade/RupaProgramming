#include <iostream>
int main()
{
    int number;
    std::cout << "enter your number :";
    std::cin >> number;
    if(number % 2 == 0)
    std::cout << "you entered even number" << std::endl;
    else
    std::cout << "you entered odd number" << std::endl;

    return 0;
}