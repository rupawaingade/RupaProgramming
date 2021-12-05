#include<iostream>
//power of number//
int PowerOfNumber(int number ,int power)
{
    if(power == 0)
    return 1;
    else
    return(number * PowerOfNumber(number,power -1));
}
//factorial of number.//
int factorial(int number)
{
    if(number == 1)
    return 1;
    else
    return (number *factorial(number-1));
}
//sum of natural numbers //
int sumOfNaturalNumbers(int number)
{
    if(number == 1)
    return 1;
    else
    return(number + sumOfNaturalNumbers(number - 1));

}
//GCD using recursion//
int GretestCommonDivisor(int n1,int n2)
{
    if(n2 != 0)
    return (GretestCommonDivisor(n2,n1 % n2));
    else 
    return n1;+-/
}
int main()
{
    int number,power,n1,n2; 
    //std::cout<<"number:";
    //std::cin>>number;
    std::cout<<"n1:";
    std::cin>>n1;
    std::cout<<"n2:";
    std::cin>>n2;
    //std::cout<<"power";
    //std::cin>>power;
   // int powerofNumber =PowerOfNumber(number,power);
   // std::cout <<powerofNumber;
   //int fact =factorial(number);
   //std::cout <<fact;
   //int sum = sumOfNaturalNumbers(number);
  // std::cout <<sum;
   int gcd = GretestCommonDivisor(n1,n2);
   std::cout << gcd;
    return 0;
}