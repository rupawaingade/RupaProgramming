#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) 
{
    int previous =0;
    int current =1;
    int next;
    if(n ==0 || n==1)
    return n;
    for(int i=0;i<n-2;i++)
    {
        
        
        next = previous +current;
        previous = current;
        current = next;
    }
    return next;
    
    
        
}
int airithmaticprogression (int n)
{
    int result = (3*n +7);
    return result;
}
int totalNumberOfSetBits(int a,int b)
{
    
        int count =0;
        int count1=0;
        while(a)
        {
          int bit = a&1;
          if(bit ==1)
          count++;
          a=a>>1;
          
        }
        
         while(b)
        {
          int bit1 = b&1;
          if(bit1 ==1)
          count1++;
          b=b>>1;
          
        }
        return count1+count;
}
bool isPrimeNumber(int n)
{
    for(int i =2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
       
    }
    return true;
}
bool isEven(int n)
{
    if(n%2 !=0)
    {
        return false; 
    }
    return true;
}
int power(int n,int power)
{
    int ans =1;
    for(int i =0;i<power;i++)
    {
         ans= ans*n;
    }
    return ans;
}



int main()
{
   int n =2;
   int power1 =3;
   int a =2;
   int b =3;
   //int result =airithmaticprogression(n);
  // cout<<result;
  /* bool result1= isPrimeNumber(n);
   if(result1 == true)
   {
    cout<<"number is Prime";
   }
   else
   cout<<"number is not prime";*/
   /*bool result3 = isEven( n);
   if(result3 == true)
   {
    cout<<"number is even";
   }
   else
   cout<<"number is odd";*/

   int result4= power(n,power1);
   int p =totalNumberOfSetBits(2,3);
   cout<<p;
    return 0;
}