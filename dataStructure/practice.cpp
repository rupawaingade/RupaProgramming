#include<iostream>
#include<cstring>



int main() {
   
    int n ;
     
    std::cin>>n;
    int *Array = new int [n];
    for(int i = 0;i < n;i++)
    {
        std::cin >>Array[i];
    }
    for(int i = n-1;i>=0;i--)
    {
        std::cout<<Array[i]<<" ";
    }
	delete[] Array;
    return 0;        
}