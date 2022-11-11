#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
void reverse(string& str,int i)
{ 
    int n =str.length();
    if(i>(n-i-1))
    return;
    swap(str[i],str[n-i-1]);
    i++;
    reverse(str,i);

}
int main()
{
  string str ="rupa";
  
  
  reverse(str,0);
  cout<<str;
  return 0;
}
