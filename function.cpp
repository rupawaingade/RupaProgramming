#include<iostream>
//call by value//
void callByValue(int a,int b)
{
    int temp = a;
        a = b;
        b = temp;
}
//call by reference//
void callByReference(int &a,int &b)
{
    int temp = a;
        a = b;
        b = temp;
}


int main()
{

    int x = 5;
    int y = 10;
    callByValue(x,y);
    std::cout << x <<std::endl;
    std::cout << y <<std::endl;
    callByReference(x,y);
    std::cout << x <<std::endl;
    std::cout << y <<std::endl;
    
    return 0;
}