#include<iostream>
int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
        return sum(n - 1)+n;
}
int main()
{
    int sum1;
    sum1 = sum(5);
    std::cout << sum1 <<std::endl;

}