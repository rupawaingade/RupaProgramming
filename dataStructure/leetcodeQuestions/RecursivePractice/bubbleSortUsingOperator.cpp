#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include <functional>

using namespace std;
void bubbleSort(vector<int>&arr,int n)
{
    if(n == 0 || n == 1)
    return;
    
    for(int i =0;i<n-1;i++)
    {
        if(arr[i] < arr[i+1])
        swap(arr[i],arr[i+1]);
    } 
    bubbleSort(arr,n-1);
}

void bubbleSortDesc(vector<int>&arr,int n)
{
    if(n == 0 || n == 1)
    return;
    
    for(int i =0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        swap(arr[i],arr[i+1]);
    } 
    bubbleSortDesc(arr,n-1);
}

template<typename O>
void bubbleSortA(vector<int>&arr,int n,  O o)
{
    if(n == 0 || n == 1)
    return;
    
    for(int i =0;i<n-1;i++)
    {
        if(o(arr[i] , arr[i+1]))
        swap(arr[i],arr[i+1]);
    } 
    bubbleSortA(arr,n-1, o);
}

int main()
{
    
vector<int> arr= {5,2,1,2,3,0};
bubbleSort(arr,arr.size());
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}

cout<< endl;

bubbleSortDesc(arr,arr.size());
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}

cout<< endl;
bubbleSortA(arr,arr.size(), std::less<int>());
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}

cout<< endl;
bubbleSortA(arr,arr.size(), std::greater<int>());
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
} 
   
  
}
