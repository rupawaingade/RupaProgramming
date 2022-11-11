#include<iostream>
using namespace std;
  int main()
  {

   int a,b,temp;
     


   cout <<"Enter first number:";
   cin >>a;
   cout <<"Enter second Number:";
   cin >>b;
     
      temp = a;
      a = b;
      b = temp;
    cout <<"new value of a:\n";
    cout << a;
    cout <<"new value of b:\n";
    cout << b;
    
   return 0;

    }
