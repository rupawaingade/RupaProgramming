#include <iostream>
int minimumOfTwo(int a , int b)
{
    return (a < b) ? a : b;
}
int maximumOfTwo(int a , int b)
{
    return (a > b) ? a : b;
} 
int minimumOfThree(int a , int b,int c)
{
    return (a < b && a < c) ? a : 
           (b < a && b < c) ? b : c;
}
int maximumOfThree(int a , int b,int c)
{
    return (a > b && a > c) ? a : 
           (b > a && b > c) ? b : c;
}
int main()
{
    int a, b,c;
    std::cout << "enter value of a :";
    std::cin >> a;
    std::cout << "enter value of b :";
    std::cin >> b;
    
    
    int min = minimumOfTwo(a, b);
    std::cout << "minimum of two is: ";
    std::cout << min;
    
    int max = maximumOfTwo(a, b);
    std::cout << "maximum of two is: ";
    std::cout << max;

    std::cout << "\nenter value of c :";
    std::cin >> c;


    int minimum = minimumOfThree(a, b, c);
    std::cout << "minimum of three is: ";
    std::cout << minimum;

    int maximum = maximumOfThree(a, b, c);
    std::cout << "maximum of three is: ";
    std::cout << maximum;


}
