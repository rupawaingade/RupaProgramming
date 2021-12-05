#include<iostream>
int main()
{
    for(int i =1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            std::cout <<i;
        }
        std::cout<< std::endl;
    }
    std::cout<<std::endl <<std::endl;

     for(int i =1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            std::cout <<j;
        }
        std::cout<< std::endl;
    }
    std::cout <<std::endl<<std::endl;
     for(int i =5;i>=1;i--)
    {
        for(int j=1;j<=5;j++)
        {
            std::cout <<i;
        }
        std::cout<< std::endl;
    }
    std::cout <<std::endl<<std::endl;
     for(int i =1;i<=5;i++)
    {
        for(int j=5;j>=1;j--)
        {
            std::cout <<j;
        }
        std::cout<< std::endl;
    }
    
    return 0;
} 