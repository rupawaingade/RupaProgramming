#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
int firstOccurance(int *arr,int s,int e,int k,int ans)
{
   
    if(s>e)
    return ans;
    int mid = s+(e-s)/2;
    if(arr[mid] == k)
    {
         ans = mid;
        return firstOccurance(arr,s,mid-1,k,ans);
    }
   else if(arr[mid]>k)
     return firstOccurance(arr,s,mid-1,k,ans);
    
    else if(arr[mid]<k)
      return firstOccurance(arr,mid+1,e,k,ans);
   
    
    
}
int lastOccurance(int *arr,int s,int e,int k,int ans)
{
   
    if(s>e)
    return ans;
    int mid = s+(e-s)/2;
    if(arr[mid] == k)
    {
         ans = mid;
        return lastOccurance(arr,mid+1,e,k,ans);
    }
   else if(arr[mid]>k)
     return lastOccurance(arr,s,mid-1,k,ans);
    
    else if(arr[mid]<k)
      return lastOccurance(arr,mid+1,e,k,ans);
}

int main()
{
  int arr[]={2,2,2,4,4,4,4,4,9,11};
  int ans=-1;
  int n=7;
  int k=4;
  int r1 =firstOccurance(arr,0,n,k,ans);
  int r2 =lastOccurance(arr,0,n,k,ans); 
  cout<<r1<<" " <<r2<<endl;
  int totalNoOfOccurance = (r2-r1)+1;
  cout<<"total no of occurance:"<<totalNoOfOccurance;
  return 0;
}
