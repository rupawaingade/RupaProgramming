#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
void bubbleSort(int *arr,int n)
 { //base case if elements are 0 or 1 the array is already sorted
     if(n==0 || n==1)
     return;
     //in bubble sort we check 1st element with 2nd whichever is greater will be swap and place into the end.
     for(int i=0;i<n-1;i++)
     {
         if(arr[i]>arr[i+1])
         {
             swap(arr[i],arr[i+1]);

         }
     }
     //recursive call
     bubbleSort(arr,n-1);


 }

int main()
{
    int n =5;
   int arr[]= {5,1,3,2,6};
   bubbleSort(arr,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
  
}
