#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;

string Duplicates(string &s) 
{
    string temp="";
    int i=0;
   
   for(int j =0;j<s.length();)
    {
     if(s[i] == s[j])
     {
         temp+=s[i];
         j++;
     }
     else
     {
         i++;
         if(temp.size()>1)
         {
         break;
         }
         else
         {
         temp=" ";
         }
     }
    }
    return temp;
}
string removeAllAdjusent(string &s)
{
    int i =0;
    while(s[i] != 0)
    {
        string r = Duplicates(s);
        s.erase(r.begin(),r.end());
    }
    return s;
}
int main()
{
    string str = "abbbcaa";
    
  string str1= removeAllAdjusent(str);
   cout<<str1;
    
    return 0;
}