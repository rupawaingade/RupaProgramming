#include<iostream>
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else 
        return fact (n-1)*n;

}
int main()
{
    int n;
    n = fact(5);
    std::cout << n;
    return 0;
}