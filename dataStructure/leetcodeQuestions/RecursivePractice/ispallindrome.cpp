#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
bool pallindrome(string& str,int i)
{ 
    int n =str.length();
    if(i>(n-i-1))
    return true;
    if(str[i] != str[n-i-1])
    return false;
    else
   {
     //i++;
     pallindrome(str,i+1);
   }
   

}
int main()
{
  string str ="moolm";
  
  
  bool s =pallindrome(str,0);
  if(s)
  cout<<"pallindrome";
  else
  cout<<"not pallindrome";
  return 0;
}
