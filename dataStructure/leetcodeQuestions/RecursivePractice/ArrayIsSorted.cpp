#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
bool isSorted(int size,int *arr)
{
    if(size == 0 || size == 1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else
    {
        int remainingPart = isSorted((size-1), (arr+1));
        return remainingPart;
    }

   

}
int main()
{
  int arr[]={4,2,4,8,9,11};

  int size =5;
  bool r =isSorted(size,arr); 
  if(r)
  cout<<"Array is sorted";
  else
  cout<<"array is not sorted"; 
  return 0;
}
