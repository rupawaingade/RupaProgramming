#include<iostream>
int main()
{
    int n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";

        }
        for(int k=1;k<=i;k++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;

    }
    for(int i=n;i>=1;i--)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";
        }
        for(int k =1;k<=i;k++)
        {
            std::cout <<"*" <<" ";
        }
        std::cout <<std::endl;

    }

    return 0;
}