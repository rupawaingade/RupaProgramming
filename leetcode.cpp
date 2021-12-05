#include<iostream>
#include<cassert>

bool ispalidrome( unsigned int x)
{
     unsigned int x1 ;
    x1 = x;
    long -121
    int reverse = 0;
    while(x1 != 0)
    {
        int lastDigit = x1 % 10;
        reverse = (reverse  * 10) + lastDigit;
        x1 = x1/10;

    }
     if(reverse == x) 
     {
         return true;
     }
     else 
     return false;
}
int main()
{
    assert((ispalindrome(121) == true));
    assert(ispalindrome(-121) == false));
    assert((ispalindrome(10) == false));
    assert((ispalindrome(-101) == false));

    return 0;
}
 