#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
bool binarySearch(int *arr,int s,int e,int k)
{
    if(s>e)
    return false;
    int mid = s+(e-s)/2;
    if(arr[mid] == k)
    return true;
   if(arr[mid]<k)
     return binarySearch (arr,mid+1,e,k);
    
    else
      return binarySearch(arr,s,mid-1,k);

    
    
}
int main()
{
  int arr[]={4,2,4,8,9,11};

  int n=6;
  int k=2;
  bool r =binarySearch(arr,0,n,k); 
  if(r)
  cout<<"key is found";
  else
  cout<<"key not Found";
  return 0;
}
