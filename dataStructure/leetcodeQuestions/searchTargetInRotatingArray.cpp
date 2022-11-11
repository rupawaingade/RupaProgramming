#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int>& nums)
{
    int start =0;
    int end =nums.size()-1;
    int mid =start+(end-start)/2;
    while(start<end)
    {
        if(nums[mid]>=nums[0])
        {
            start=mid+1;
        }
        else
        {
            end =mid;
        }
        mid =start+(end-start)/2;
    }
    return start;
}
  int searchElement(vector<int>& nums, int target) 
{
    int start =0;
    int end = nums.size()-1;
    int mid = start+(end-start)/2;
    
e;e
int main()
{
    vector<int>arr ={4,5,6,7,0,1,2};
    int result =pivot(arr);
    cout<<result;
}