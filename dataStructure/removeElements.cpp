#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int removeElements(vector<int>& nums,int val)
{
    int length =nums.size();
    int count = 0;
   
    
      for(int i= 0;i<length;i++)
        {
           if(nums[count] != val)
           {
             nums[count] = nums[i];
               count++;
           }
              
            
        }
        
        return count;
    
  
}

int main()
{
    vector<int> nums = {3,2,2,3,0};
    int k=removeElements(nums,2);
    cout<<k<<endl;
    for(int i =0;i<nums.size();i++)
    cout<<nums[i];
    
    
    return 0;
}

