#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int binarySearch(int n)
{
    int s =0;
    int e =n;
    long long int mid = s+(e-s)/2;
    long long int ans =-1;
    while (s<=e)
    {
       long long int square =mid*mid;
        if(square == n)
        {
             
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            s =mid+1;
        }
        else
        {
            e = mid -1;
        }
         mid = s+(e-s)/2;
    }
    return ans;

}
double morePrecision(int n, long long ans,int precision)
{
    double factor =1;
    double PreciAns =ans;
    for(int i =0;i<precision;i++)
    {
        factor = factor/10;
        for(double j = PreciAns;j*j<n;j=j+factor)
        {
            PreciAns=j;
        }

    }
    return PreciAns;
}
 int sqrtx(int x)
 {
     return binarySearch(x);   
 }
int main()
{
    int number =36;
    long long intSolu = binarySearch(number);
    double ans = morePrecision(number,intSolu,3);
    cout << ans;
    return 0;
}