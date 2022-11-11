#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
void selectionSort(int *arr,int n)
 { //base case if elements are 0 or 1 the array is already sorted
     if(n==0 || n==1)
     return;
     //in selection sort we check 1st element with next whole array whichever is smaller will be swap and place into the start.
     for(int i=0;i<n-1;i++)
     {
         for(int j =i+1;j<n;j++)
         if(arr[j]<arr[i])
         {
             swap(arr[i],arr[j]);

         }
     }
     //recursive call
     selectionSort(arr,n-1);


 }

int main()
{
    int n =5;
   int arr[]= {5,1,3,2,6};
   selectionSort(arr,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
  
}
