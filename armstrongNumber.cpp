#include<iostream>
void armstrongNumber(int Number)
{
    int armstrongNumber = 0;
    int n;
    n = Number;
    
    while(n != 0)
    {
        int lastDigit = n % 10;
        armstrongNumber = armstrongNumber + (lastDigit * lastDigit * lastDigit);
        n = n /10;

    }

    if(armstrongNumber == Number);
        std::cout <<"armstrong Number";
    else
        std::cout <<"number is not armstrong";

}



int main()
{
    int number;
    std::cout <<"Number:";
    std::cin >>number;
    armstrongNumber(number);
    return 0;
}