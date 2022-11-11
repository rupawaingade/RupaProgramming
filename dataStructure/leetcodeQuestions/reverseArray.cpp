#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr)
{
    int i = 0;
    int j= arr.size()-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;

    }
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
    vector<int>arr = {1,2,3,4,5};
    reverse(arr);
    print(arr);
    return 0;
}