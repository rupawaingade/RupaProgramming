#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;
void reverse(stack<char>s,string str)
{
    for(int i=0;i<str.length();i++)
    {
        char ch =str[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty())
    {
        char ch =s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;

}
int main()
{
    string str ="rupa";
    stack<char>s;
    reverse(s,str);
    
}