#include<iostream>
using namespace std;

  int main()
{
  int number;

  cout << "enter the number:";
  cin >> number;
  if(number % 2 == 0)
    cout << "number is Even.";
  else
    cout << "number is odd.";

 return 0;
}
