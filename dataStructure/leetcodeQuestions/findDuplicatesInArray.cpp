#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicatesInArray(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    vector<int>dparr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] ==arr[i+1])
        {
            dparr.push_back(arr[i]);

        }

    }
    
    
 return dparr;
}



int main()
{
    vector<int>arr ={1,2,2,1,4,4,3};
    vector<int> ans = duplicatesInArray(arr);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i];
    return 0;
}