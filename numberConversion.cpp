#include<iostream>
#include<cmath>
//Binary to Decimal Conversion
int  binaryToDecimalConversion(int number)
{
    int i = 0;
    int binary = 0;
    while(number != 0)
    {
        int lastDigit = number % 10;
        binary = binary + (lastDigit * (pow(2,i)));
        number = number /10;
        i++;
    }
    return binary;
}
//octal to decimal conversion//
void octalToDecimalConversion(int number)
{
    int i = 0;
    int octal = 0;
    while(number != 0)
    {
        int lastDigit = number % 10;
        octal = octal + (lastDigit * (pow(8,i)));
        number = number /10;
        i++;
    }
    std::cout << octal;
}
//reverse number//
int reverseNumer(int number)
{
    int resultedNumber = 0;
    while(number != 0)
    {
         int lastDigit = number % 10;
        resultedNumber = (resultedNumber * 10) + lastDigit;
        number = number /10;
    }
    return resultedNumber;
}
//decimal to octal//
int decimalToOctalConversion(int decimal)
{
    int octal = 0;
    while(decimal != 0)
    {
        int lastDigit = decimal % 8;
        octal = (octal * 10) + lastDigit;
        decimal= decimal /8;
    }
    octal = reverseNumer(octal);
    return octal;
    
}

    

//binary to octal Conversion//
int binaryToOctalConversion(int number)
{
    
    int decimal = binaryToDecimalConversion(number);

    int octal = decimalToOctalConversion(decimal);
    return octal;
}

int main()
{
    int number;
    std::cout <<"Number:";
    std::cin>>number;
    int binaryToOctal = binaryToOctalConversion(number);
    std::cout <<binaryToOctal;
    return 0;
}