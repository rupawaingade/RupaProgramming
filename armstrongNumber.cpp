#include<iostream>
using namespace std;

int cube(int number)
{
    return number*number*number;
}

bool isArmstrong (int number)
{
    int remainder = 0;
    int a = 0;
    int x = number;
    while(number>0)
    {
        remainder % = 10;
        number /= 10;
        a += cube (remainder);
    }
    return a==x;
}

int main()
{

    int number = 0;
    
    cout << "Enter Number:";
    cin >>number;

    if(true == isArmstrong(number))
        cout << "number is armstrong:";
    else
        cout << "number is not armstrong";

        
    return 0;

}