#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr)
{
    for(int i =0;i<arr.size()-1;i++)
    {
        int min =i;
        for(int j =i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[min])
            {
               min =j;
            }
        }
       swap(arr[min],arr[i]);
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
    vector<int>arr={64,25,12,22,11};
    selectionSort(arr);
    print(arr);
}
