#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>&nums,int k)
{
    vector<int>temp(nums.size());
    for(int j=0;j<nums.size();j++)
    {
        temp[(j+k)%(nums.size())] = nums[j];
        
    }
    //copy temp value into nums;
    nums =temp;
}
void print(vector<int>&arr)
{
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    vector<int>arr = {1,3,5,12,15};
    rotate(arr,3);
    print(arr);
    return 0;
}