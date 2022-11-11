kl,ko00ol,#include<iostream>
int main()
{
    int lenght;
    std::cout <<"Length :";
    std::cin >>lenght;
    char symbol;
    std::cout <<"symbol";
    std::cin >>symbol;
    for(int i=1;i<=lenght;i++)
    {
        for(int j=1;j<= i;j++)
        {
            std::cout << " " << symbol;
        }
        std::cout << std::endl;
    }

    std::cout <<std::endl<<std::endl;
     for(int i=lenght;i>=1;i--)
    {
        for(int j=1;j<= i;j++)
        {
            std::cout << " " << symbol;
        }
        std::cout << std::endl;
    }
    

    return 0;
}