#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int removeElements(vector<int>& nums,int val)
{
    int length =nums.size();
   
    if(val> 0 && val<=length)
    { 
      for(int i=0;i<length-1;i++)
        {
            if(nums[i]==val)
            {
                nums[i] = nums[i+1];
            
            }
            length--;
            
            
        }
        
       
    }
    return length;
}

int main()
{
    vector<int> nums = {3,2,2,3,0};
    int val = 3 ;
    int k=removeElements(nums,3);
    cout<<k<<endl;
    for(int i =0;i<nums.size();i++)
    cout<<removeElements(nums,3);
    
    
    return 0;
}

