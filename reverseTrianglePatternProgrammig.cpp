#include<iostream>
int main()
{
     for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout <<"*";
        }
        std::cout <<std::endl;
    }
      for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            std::cout <<i;
        }
        std::cout <<std::endl;
    }
      for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            std::cout <<j;
        }
        std::cout <<std::endl;
    }
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout <<i;
        }
        std::cout <<std::endl;
    }
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout <<j;
        }
        std::cout <<std::endl;
    }
    return 0;
}