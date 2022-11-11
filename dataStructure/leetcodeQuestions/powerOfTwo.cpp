#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


bool isPowerOfTwo(int n) 
{
    
    for(int i=0;i<=30;i++)
    {
        int ans =pow(2,i);
        if((ans == n) )
        {
            return true;
        }
    }
    return false;
        
}



int main()
{
   int n =1;
   
   bool result=isPowerOfTwo(n) ;


     if(result == 0)
   cout<<"False";
   else 
   cout<<"true";
    return 0;
}