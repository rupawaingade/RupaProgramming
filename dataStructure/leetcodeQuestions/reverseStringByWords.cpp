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
    while(i<str.size())
    {
        while(j<str.size() && str[j] != ' ')
        j++;
        reverse(str.begin()+i,str.begin()+j);
        i = j + 1;
        j = i;
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