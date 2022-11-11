#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;

void reverseByWords(string & str)
{
    size_t i =0;
    string result;
        
    while(i<str.size())
    {
        if(str[i] == ' ')
        {
            result.push_back('@');
            result.push_back('4');
            result.push_back('0');
        }
        else
        {
           result.push_back(str[i]);
        }
        
       i++;
    
    }
    str = result;

}

int main()
{
    string str = "My Name is Rupa";
    reverseByWords(str);
    for(size_t i=0;i<str.size();i++)
    cout<<str[i];
    return 0;
}