#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int SquareRoot(int number)
{
    int start =0;
    int end =number;
    int mid =start+(end-start)/2;
    int ans =0;
    while(start<=end)
    {
        if(mid*mid>number)
        {
            end =mid-1;
        }
        else if(mid*mid<number)
        {
             ans =mid;
            start = mid+1;
        }
        else
        {
            return mid;
        }
        mid =start+(end-start)/2;

    }

    return ans;
}

int main()
{
    int number =37;
    int result =SquareRoot(number);
    cout<<result;
}