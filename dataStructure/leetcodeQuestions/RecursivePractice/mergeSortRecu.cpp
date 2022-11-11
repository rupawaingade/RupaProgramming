#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
void merge(vector<int>&arr,int s,int mid,int e)
{
    int i =s;
    int j =mid+1;
    int k = s;
    //temparary vector to store sorted elelments
    vector<int>temp(arr.size());
    //we split one array into 2m0 l097   while(i<=mid && j<=e)
    {
        if(arr[i] <= arr[j])
        {  
            temp[k++]=arr[i++];
        }
        else
        {
           temp[k++]=arr[j++];
        }
    }
    for(;i<=mid;i++)
    {
        temp[k++]=arr[i];
    }
    for(;j<=e;j++)
    {
        temp[k++]=arr[j];
    }
    for(int i=s;i<=e;i++)
    {
        arr[i]=temp[i];
    }
}
void mergeSort(vector<int>&arr,int s,int e)
{
    if(s<e)
    {
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
    }
}

int main()
{
    
   vector<int> arr= {5,1,3,2,6,7,9};
   mergeSort(arr,0,arr.size()-1);
   for(int i=0;i<arr.size();i++)
   {
       cout<<arr[i]<<" ";
   }
  
}
