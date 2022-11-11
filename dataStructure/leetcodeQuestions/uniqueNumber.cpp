#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int uniqueNumber(vector<int>& arr)
{
    int ans =0;
   for(int i = 0;i<arr.size();i++)
   {
        ans = ans^arr[i];
   }
   return ans;
}
int main()
{
     vector<int>arr ={1,2,2,1,4,4,3};
    int ans = uniqueNumber(arr);
    cout<<ans;
    return 0;
}