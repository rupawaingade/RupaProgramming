#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;


    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<arr1.size())
    {
        arr3[k++]=arr1[i++];
    }
     while(j<arr2.size())
    {
        arr3[k++]=arr2[j++];
    }
    return arr3;
}
void print(vector<int>&arr)
{
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
}


int main()
{
    vector<int>arr1 = {1,3,5,7};
    vector<int>arr2 = {2,4,6};
    vector<int>arr3 = {0,0,0,0,0,0,0};
    arr3=merge(arr1,arr2,arr3);
    print(arr3);
    return 0;
}