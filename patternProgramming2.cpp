#include<iostream>
int main()
{
    char i,j;
    for(i = 'A';i<='E';i++)
    {
        for(j ='A';j<='E';j++ )
        {
            std::cout <<i;
        }
        std::cout<<std::endl;
    }

    std::cout<<std::endl <<std::endl;
    for(i = 'A';i<='E';i++)
    {
        for(j ='A';j<='E';j++ )
        {
            std::cout <<j;
        }
        std::cout<<std::endl;
    }
    std::cout <<std::endl <<std::endl;
    for(int i =69;i>=65;i--)
    {
        for(int j=1;j<=5;j++)
        {
            std::cout <<(char)i;
        }
        std::cout << std::endl;
    }
    std::cout <<std::endl <<std::endl;
    for(int i =69;i>=65;i--)
    {
        for(int j=69;j>=65;j--)
        {
            std::cout <<(char)j;
        }
        std::cout << std::endl;
    }
   
    return 0;
}