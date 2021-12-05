#include<iostream>
int main()
{
    int Number,i,factorial = 1;
    std::cout <<"Number :";
    std::cin >>Number;
    /*for( i = Number ; i > 0;i--)
    {
        factorial = i * factorial;
    }*/
    for (i=1;i<=Number;i++)
    {
        factorial = factorial * i;
    }
    std::cout <<factorial;

    return 0;
}