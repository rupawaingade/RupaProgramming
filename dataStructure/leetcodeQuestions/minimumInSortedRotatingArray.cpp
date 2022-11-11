#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) 
{
      int start =0;
      int end = nums.size()-1;
      int ans  =0;
      while(start < end)
      {
         int mid = start+(end-start)/2;
        if(nums[mid]<nums[end])
        {
            end = mid ;
        }
        else 
        {
            
            start = mid+1;
        }
        
       
      }
     
    return nums[start]; 
}



int main()
{
    vector<int> nums = {4,5,6,7,0,1,2,3};

    int ans = findMin(nums);
    
        cout << ans;
    return 0;
}