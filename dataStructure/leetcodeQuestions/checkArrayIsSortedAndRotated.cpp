#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
bool ifRotated(vector<int>&nums)
{
    int count = 0;
    int i;
    for( i =1;i<nums.size();i++)
    {
        if(nums[i-1]>nums[i])
        {
            count++;
        }
    }
    if(nums[i-1]>nums[0])
    {
        count++;
    }
    return count<=1;
}

int main()
{
    vector<int>arr = {3,4,5,1,2};
    bool k=ifRotated(arr);
    if(k)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}