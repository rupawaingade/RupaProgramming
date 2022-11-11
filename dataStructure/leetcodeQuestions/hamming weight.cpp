#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int hammingWeight(uint32_t n) 
 {
    
    int count =0;
    while (n > 0) 
    {
        if(n&1)
        {
           
            count++;
        }
        n=n>>1;
    }
    return count ; 
}


int main()
{
   int n =00000000000000000000000000001011;
   
   int result=hammingWeight(n);
   cout<<result;
    return 0;
}