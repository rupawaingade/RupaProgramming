#include<iostream>

int main()
{
    int Height,Width;
    char Symbol;
    std::cout <<"Height :";
    std::cin >> Height;
    std::cout <<"Width :";
    std::cin >> Width;
    std::cout <<"Symbol :";
    std::cin >> Symbol;
    for(int h =0;h<Height;h++)
    {
        for(int w = 0;w<Width;w++)
        {
            std::cout <<" " <<Symbol ;
        }

        std::cout <<std::endl;
    }
    
    
    return 0;
}