#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
bool linearSearch(int size,int *arr,int k)
{
    if(size ==0)
    return false;
    if(arr[0]==k)
    return true;
    else
    {
        int remainingPart =linearSearch (size-1,arr+1,k);
    }
    return 0;
    
}
int main()
{
  int arr[]={4,2,4,8,9,11};

  int size =6;
  int k=4;
  bool r =linearSearch(size,arr,k); 
  if(r)
  cout<<"key is found";
  else
  cout<<"key not Found";
  return 0;
}
