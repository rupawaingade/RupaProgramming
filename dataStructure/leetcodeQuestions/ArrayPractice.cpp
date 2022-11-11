#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n)
{
    int start =0;
    int end = n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int sum(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum +arr[i];
    }
    
    return sum;
}
bool linearSearch(int arr[],int n,int key)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
void swapAlternate(int arr[],int n)
{
    int start =0;
    int next = start+1;
    
    while(next<n)
    {
        swap(arr[start],arr[next]);
        start = next+1;
        next = next+2;
        //n--;

    }
}

void print(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i];
    }
    
}



int main()
{
    int arr[]={1,2,2,1,3,4};
    int n =6;
    

    //reverse(arr,5);
   // print(arr,5);
    //cout<<endl;
    //int s = sum(arr,n);
    //cout<<"sum is:"<<s<<endl;
   // bool k = linearSearch(arr,n,0);
   /* if(k)
    {
        cout<<"element is present"<<endl;

    }
    else
        cout<<"element is not present"<<endl;*/
   // swapAlternate(arr,5);
   // print(arr,5);
    
    return 0;
}