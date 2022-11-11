#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int firstOccu(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int m = s + (e - s) / 2;
    int i = 0;
    int ans;
    while (s <= e)
    {
        if (nums[m] == target)
        {
            ans = m;
            e = m - 1;
        }
        else if (target > nums[m])

        {
            s = m + 1;
        }
        else if (target < nums[m])
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
int lastOccu(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int m = s + (e - s) / 2;
    int i = 0;
    int ans;
    while (s <= e)
    {
        if (nums[m] == target)
        {
            ans = m;
            s = m + 1;
        }
        else if (target > nums[m])

        {
            s = m + 1;
        }
        else if (target < nums[m])
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{

    vector<int> ans;

    ans.push_back(firstOccu(nums, target));

    ans.push_back(lastOccu(nums, target));
    return ans;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};

    // int ans1 = firstOccu(nums,8);
    // int ans2 = lastOccu(nums,8);
    vector<int> ans = searchRange(nums, 8);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    return 0;
}