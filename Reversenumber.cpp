#include<iostream>
using namespace std;
	int main()
	      {
               
     

                    int number,lastDigit;
 		    int reverse =0;
		    
		     cout << "enter number that you want to reverse:";
		     cin >>number;
                      while(number>0)
                         {

                             lastDigit = number%10;
			     reverse = (reverse*10)+lastDigit;
			     number = number/10;

		          } 
		 
                        cout << reverse;













                   return 0;
		}
