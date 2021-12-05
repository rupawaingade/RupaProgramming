#include <iostream>


int main()
{
    int Number;
    std::cout <<"Number :";
    std::cin >> Number;
     int reverseNumber = 0;
    while (Number != 0)
    {
       
        reverseNumber = reverseNumber * 10;
        int lastDigit = Number % 10;
        reverseNumber = reverseNumber + lastDigit;
        Number = Number/10;

    }
    std::cout << reverseNumber;
    

    return 0;
}
