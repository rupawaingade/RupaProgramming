#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(vector<int>arr)
{
    int sum =0;
    for(int i=0;i<arr.size();i++)
    {
        sum = sum +arr[i];
    }
    return sum;
}
int pivotIndex(vector<int>& arr)
{
    int total=sum(arr);
    int leftsum = 0;
    for(int i = 0;i < arr.size();i++)
    {
    int rightSum = total - leftsum - arr[i];
        if(leftsum == rightSum)
        {
            return i;
        }
        leftsum = leftsum +arr[i];
    } 
    return -1;
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};

    int ans = pivotIndex(nums);
    
        cout << ans;
    return 0;
}