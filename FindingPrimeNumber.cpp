#include<iostream>
using namespace std;
  int main()
    {

      int i,number;

     cout << "Enter number:";
      cin >> number;

     for(i=2;i<number;i++)
     {
       if(number % i == 0)
        {
            cout <<"not a prime number";
            break;
        }
          
     }
       if(number == i)
       cout << "prime number";
           return 0;

    }
