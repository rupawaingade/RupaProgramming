#include<iostream>
using namespace std;
	int main()
	     {
		int number,counter;
		cout << "enter number to count digits:";
		cin >>number;
		while(number>0)
		  {
	          

                       number = number / 10;
                       counter++; 
                  }
		 

		 cout <<counter;






		return 0;

	     }
