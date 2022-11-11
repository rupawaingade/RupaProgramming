#include<iostream>

using namespace std;



   	int main()

	{
	   
           int number,i;
           int table = 1;

           cout << "Enter Number for Table:";
           cin >> number;
	   for(i=1;i<=10;i++)
             {
                table = number*i;
                 cout << "\n";
                 cout << table;
                
              }
              
            return 0;
           

          }
              	
