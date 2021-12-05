#include<iostream>

int linearSearch(int numbers[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(numbers[i] == key)
        {
            return i;
        }
        
    }
     return -1;
}
int binarySearch(int numbers[],int n,int key)
{
    int start =0;
    int end = n;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if (numbers[mid] == key)
        {
            return mid;
        }
        else if(numbers[mid]>key)
        {
        end =mid-1;
        }
        else
        start= mid+1
    }
    return -1;
}

int main()
{
    int n;
    

   // std::cout<< "numbers:";
    std::cin>> n;
    int numbers[n];
    int key;
    for(int i=0;i<n;i++)
    {
        std::cin>>numbers[i];

    }
    std::cin>>key;

    std::cout<< binary5Search(numbers,n,key);
    
  
    return 0;
}
