#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
   

}



int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
   
   
    //int m = sizeof(nums1) / sizeof(nums1[0]); 
   // int n = sizeof(nums2) / sizeof(nums2[0]); 
    
    merge(nums1,6,nums2,3);
    for(int i = 0;i<nums1.size();i++)
    cout<<nums1[i];
    return 0;
}