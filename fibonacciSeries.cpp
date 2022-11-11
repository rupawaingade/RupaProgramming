#include<iostream>
using namespace std;
	int main()
		{
                   
                    int first = 0;
	            int second = 1;
		    int next = 1;
		    int number,i;
            

                     cout << "enter limit to generate fibonacci series:";
					 
                     cin >> number;

                     for(i=0;i<=number;i++)
                      {
	                 cout <<"\n"<<first;
                         next = first + second;
			 first = second; 
			 second = next;
		      


                        
                      }





                      return 0;
		}
