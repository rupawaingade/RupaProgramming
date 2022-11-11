#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;

char toLower(char ch)
{
    return (ch>='A' &&ch<='Z') ? (ch-'A'+'a') : ch;
 
}
bool Vowels(char ch)
{
    return(ch =='a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'||ch =='A' || ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U');
}
 string reverseVowels(string s) 
 {
    if( s.empty())
    return s;
     size_t i =0;
     size_t j=s.size()-1;
     while(i<j)
     {
       if(!Vowels(s[i])) 
        {
                
                i++;
                
        }
        else if(!Vowels(s[j])) 
        {
                
                j--;
                
        }
        else 
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
     }
     return s;
        
 }
int main()
{
    string str = " Aa";
    
  string str1= reverseVowels(str);
  for(size_t i=0;i<str1.size();i++)
   cout<<str1[i];
    
    return 0;
}