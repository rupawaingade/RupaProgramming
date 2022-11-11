#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
vector<int> ArrayOfduplicates(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int i = 0;
    while (i < arr.size())
    {

        int j = i + 1;
        if (arr[i] == arr[j])
        {
            ans.push_back(arr[i]);
            i = j + 1;
            j = i + 1;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
vector<vector<int>> pairOfSum(vector<int> arr, int target)
{
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    return ans;
}
vector<int> intersection(vector<int> arr1, vector<int> arr2)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int m = arr1.size();
    int n = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
vector<int> sort(vector<int> arr)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}
bool uniqueOccurances(vector<int> arr)

{
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = i;
    int count = 1;
    vector<int> ans;
    while (i < arr.size())
    {
        if (i == j)
        {
            j++;
        }
        else if (arr[i] == arr[j])
        {
            count++;
            j++;
        }
        else
        {
          i=j;
          ans.push_back(count);
          count = 1;
        }
    }

   
    for (int i = 0, j = 1; i < ans.size(); i++, j++)
    {
        if (ans[i] == ans[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    /* vector<int>arr ={4,4,3,2,7,8,2,3,1};
     vector<int>result=ArrayOfduplicates(arr);
     for(int i =0;i<result.size();i++)
     cout<<result[i];*/
    /*vector<int>arr1 ={1,2,3,4,5};
    vector<vector<int>>result1=pairOfSum(arr1,5);
    for(int i =0;i<result1.size();i++)
    {
        for(int j =0;j<result1[i].size();j++)
        {
            cout<<result1[i][j];
        }
        cout<<endl;
    }
    */
    /*vector<int> arr1 ={1,2,2,2,3,4};
    vector<int>arr2 = {2,2,3,3};
    vector<int>r =intersection(arr1,arr2);
    for(int i=0;i<r.size();i++)
    {
     cout<<r[i];
    }*/
    /*vector<int>arr ={1,1,0,0,0,1,0};
    vector<int>s = sort(arr);
    for(int i =0;i<s.size();i++)
    {
     cout<<s[i];
    }*/
    vector<int> arr = {1, 2, 2, 1, 1,3, 3};
    bool k = uniqueOccurances(arr);
    if (k == 0)
    {
        cout << "false";
    }
    else
        cout << "true";
}