#include<iostream>
int main()
{
    int userPin = 1234 ,pin,errorCounter = 0;

    do
    {
        std::cout << "PIN :";
        std::cin >> pin;
        if(pin != userPin)
        errorCounter++;
        
    } while (errorCounter < 3 && pin != userPin);
    if (errorCounter <3)
    std::cout <<"loading...";
    else
    std::cout <<"Blocked...";
    return 0;
}