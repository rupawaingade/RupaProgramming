#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
 {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int m = nums1.size();
    int n = nums2.size();
    int i = 0,j = 0;
    vector<int>ans;
    while(i<m && j<n)
    {
        if(nums1[i] < nums2[j])
        {
            i++;
        }
        else if(nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
        
 }

 int main()
{
    vector<int>arr1 ={1,2,2,1};
    vector<int>arr2 ={2,2};
    vector<int> ans = intersection(arr1,arr2);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i];
    return 0;
}