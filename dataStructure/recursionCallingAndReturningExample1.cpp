#include<iostream>
void fun(int n)
{
    if(n > 0)
    {
        std::cout << n;
        fun (n-1);
    }
}
void fun1(int n1)
{
    if(n1 > 0)
    {

        fun1(n1-1);
        std::cout << n1 << std::endl;
       
    }
}

int main()
{
    int x = 5;
    fun1(x);
    return 0;
}