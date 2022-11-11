#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter Number:";
    cin >>a >>b >>c;
    if(a>b)
    {
        cout << "A is greater.";
    }
    else if(b>c)
    {
        cout << "B is greater.";

    }
    else if(a>c)
    {
        cout << "A is greater";
    }


    return 0;
}