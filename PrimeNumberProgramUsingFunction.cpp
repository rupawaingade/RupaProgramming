#include<iostream>
bool isPrimeNumber(int number)
{
    for(int i=2;i<number;i++)
    {
        if(number % i == 0)
        return false;
    }
    return true;
}
int main()
{  
    for(int i =1;i<=1000;i++)
    {
        (isPrimeNumber(i));
        std::cout << "is prime:"<<i <<"\n";
        
    }     
  /*  int number;
    std::cout<<"number";
    std::cin>>number;
    bool isPrime = isPrimeNumber(number);
    if(isPrime == true)
    
    std::cout << "number is prime";
    else
    std::cout <<"number is not prime";  */


    return 0;
}