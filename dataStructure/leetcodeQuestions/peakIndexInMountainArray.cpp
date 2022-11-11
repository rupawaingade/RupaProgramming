#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//using linear search
int peakIndexInMountainArray(vector<int>& arr)
{     int ans;
      int peak = INT_MIN  ;
      for(int i =0;i<arr.size();i++)
      {
        
        if(arr[i] > peak)
        {
            ans = i;
        }
      }
      return ans;
}
//binary search
int peakIndexInMountainArrayB(vector<int>& arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    int ans;
    while(s < e){
        if(arr[mid] > arr[mid+1])
        {  
            ans = mid;
            e = mid;
        }
        else if(arr[mid] < arr [mid+1])
        {
            ans = mid +1;
            s = mid +1;
        }
        mid = s+(e-s)/2;
    }
      return ans;       
}






int main()
{
    vector<int> nums = {0,1,0};

    int ans = peakIndexInMountainArrayB(nums);
    
        cout << ans;
    return 0;
}