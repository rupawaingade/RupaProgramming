#include<iostream>
using namespace std;


   int main()
   
    {

       int i,number,fact=1;
        
       cout << "enter number for factorial:";
       cin >> number;
       

       for(i=number;i>=1;i--)
        { 
       

           fact = fact*i; 

           
        } 
          
         
        cout << fact;
      









       return 0;

     }
