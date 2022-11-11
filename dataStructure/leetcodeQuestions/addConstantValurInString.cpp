#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;

void reverseByWords(string & str)
{
    int i =0;
    int j =0;
    const char val ='@';
    
    while(i<str.size())
    {
        if(str[i]==' ')
        {
            str.push_back('@');
           
        }
       i++;
    }

}

int main()
{
    string str = "My Name is Rupa";
    reverseByWords(str);
    for(int i=0;i<str.size();i++)
    cout<<str[i];
    return 0;
}