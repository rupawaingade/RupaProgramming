#include<iostream>
int main()
{
    int myNumbers[5];
    for(int i =0;i<5;i++)
    {
        std::cout <<"Numbers:";
        std::cin >> myNumbers[i];
    }
    std::cout << *(myNumbers+0) <<std::endl;
    std::cout << myNumbers[1] << std::endl;
    for(int i = 0;i< 5;i++)
    {
        std::cout << *(myNumbers +i) <<" ";
    }
    return 0;
}