#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&arr)
{
    int temp;
  for(int i=1;i<arr.size();i++)
  {
    int j =i-1;
    temp =arr[i];
    while(j>-1 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1] = temp;
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
    insertionSort(arr);
    print(arr);
}