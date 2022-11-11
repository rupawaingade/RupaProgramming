#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subtractProductAndSum(int n) 
{
    int digit = 0;
    int sum =0;
    int product =1;
    while(n != 0)
    {
        digit = n%10;
        product = product *digit;
        sum = sum+digit;
        n = n/10;
    }    
      int result = product - sum;
      return result;  
        
}



int main()
{
   int n = 234;
   int result=subtractProductAndSum(n);
   cout<<result;
    return 0;
}