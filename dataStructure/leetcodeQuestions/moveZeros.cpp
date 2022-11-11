#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void moveZero(vector<int>&arr)
{
    int i = 0;
    for(int j=0;j<arr.size();j++)
    {
        if(arr[j]!= 0);                                                    
        {
         swap(arr[j],arr[i]);
         i++;
        }
    }
}
void print(vector<int>&arr)
{
    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    vector<int>arr = {0,1,0,3,12};
    moveZero(arr);
    print(arr);
    return 0;
}