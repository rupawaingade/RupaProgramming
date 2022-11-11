#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int reverse(int x) 
{
    signed int result =0;
     while(x!= 0)
     {
        signed int digit = x%10;
        if((x > INT_MAX/10) ||( x<INT_MIN/10))
        {
            return 0;
        }
        
        result = result * 10 + digit;
        
        x =x/10;
        
     }  
     return result;    
}

int main()
{
   int n =123456799;
   
   int result=reverse(n);
   cout<<result;
    return 0;
}