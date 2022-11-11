#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& arr)
{
    
   int i=0;
   int j=1;
    while(j<arr.size())
    {
         
        if(arr[i]==arr[j])
        {
            j++;
            
            
        }
        else if(arr[i]!= arr[j])
        {
            i++;
            arr[i]=arr[j];
            
        }
        
    }
   
 return i+1;
}
int uniquenumber(vector<int>&arr)
{
    int i =0;
    int count =0;
    int ans =0;
    sort(arr.begin(),arr.end());
    if(arr.size() == 1)
    {
        return arr[0];
    }
    for( i=0;i<=arr.size();i=i+2)
    {
        
            if(arr[i] != arr[i+1] )
            {
               return arr[i];
            }
            
        
    }
    
    return 0;
}
int pattern(int n)
{
           
      for(int i =n;i>=1;i--)
      {
        
        for(int j=1;j<=i;j++)
        {
            
            
            cout<<j;
        }
        
        cout<<endl;
      }
      
      
   
}

int main()
{
    vector<int> nums = {0,0,2,1,1,3,3};
   // vector<int>expresult = {0,1,2,3,4,};
    int ans =uniquenumber(nums);
     //ans == expresult.size();
    
        //cout <<ans;
        pattern(5);
    return 0;
}