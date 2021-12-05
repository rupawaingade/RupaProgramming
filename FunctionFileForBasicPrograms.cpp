#include<iostream>
//Display Fibonacci Series..with normal function//
void fibonacciSeries(int number)
{
    int first =0;
    int second =1;
    int result =0;
    for(int i=0;i<number;i++)
    {
        if(i<=1)
        result = i;
        else
        {
        result = first + second; 
        first = second;
        second = result;
        }
        std ::cout <<result <<"\n";
    }

}
//Display Fibonacci Series..with recursive function//
int Fibonacci(int number)
{
    if((number == 0 )||( number == 1))
    return (number);
    else
    return(Fibonacci(number-1) + Fibonacci(number-2));

}
//check Number is pallindrome or not..//
void pallindrome(int number)
{
    int reverseNumber = 0;
    int n;
    n= number;

    while(n != 0)
    { 
        
        int lastDigit = n % 10;
        reverseNumber = (reverseNumber * 10 )+ lastDigit;
        n = n/10;
    }
    std::cout <<reverseNumber<< std::endl;
    std::cout <<number <<std::endl;
    
    if ( reverseNumber == number)
    std::cout <<"number is pallindrome";
    else
    std::cout <<"number is not pallindrome";

}
//program to find gcd and lcm of two numbers.//
void greatestCommonFactor(int numberA ,int numberB)
{
    int n,GreatestDivisorfactor,small,lowestCommonMuliple;
   small=(numberA<numberB)? numberA :numberB;
   
    for(int i = 1;i <= small ; i++)
    {
        if(numberA % i == 0 && numberB % i == 0)
        {
             GreatestDivisorfactor = i;
            
        }
       
    }
    lowestCommonMuliple = (numberA * numberB) + GreatestDivisorfactor;
    std::cout<<GreatestDivisorfactor<<std::endl;
    std::cout<<lowestCommonMuliple<<std::endl;
}
//programto find power of a number.//
int powerOfNumber(int base ,int exponent)
{
    int power = 1;
   while(exponent != 0)
   {
      power = power * base;
      exponent --;
   }
    return power;
}
int main()
{
    int number ,numberA,numberB,exponent,base;
    int i=0;
    //std::cout <<"Number:" ;
    //std::cin >> number;
    std::cout <<"base:" ;
    std::cin >> base;
    
    std::cout <<"Exponent:";
    std::cin >> exponent;
    int power =0;
    //std::cout <<"Number1:" ;
   // std::cin >> numberA;
    //std::cout <<"Number2:" ;
    //std::cin >> numberB;
    
   // fibonacciSeries(limit);
  // while(i<number)
  // {
  //  std::cout <<Fibonacci(i);
   // i++;
   // }
   
   //pallindrome(number);
  // greatestCommonFactor(numberA,numberB);
  power = powerOfNumber(base, exponent);
  std::cout << power;

}
