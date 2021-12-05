#include <cassert>
#include<iostream>

template<typename T>
T sum(T a, int b)
{
    return a+b;
}

long sum(long a, long b)
{
    return a+b;
}



int main()
{
    assert(sum(1,1) == 2);
    assert(sum(111111111111111111,111111111111111111) == 222222222222222222);
}
