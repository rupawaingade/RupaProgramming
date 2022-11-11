#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
int isSum(int size,int *arr)
{
    if(size == 0)
    return 0;
    if(size == 1)
    return arr[0];
    else
    {
        int remainingPart = isSum(size-1,arr+1);
        int sum =arr[0]+remainingPart;
        return sum;
    }
    
   

}
int main()
{
  int arr[]={4,2,4,8,9,11};

  int size =6;
  int r =isSum(size,arr); 
  cout<<"sum is :"<<r<<endl;
}