#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&arr)
{
     bool flag=false;;
    for(int i =0;i<arr.size()-1;i++)
    {
        for(int j =0;j<arr.size()-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag =true;
            }
        }
        if(flag == false)
        {
            break;
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
    vector<int>arr={64,12,53,14,9};
    BubbleSort(arr);
    print(arr);
}