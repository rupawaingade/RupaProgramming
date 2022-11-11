#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;
void print(stack<int>&s)
{
    if (s.empty())
        return;
     
 
    int x = s.top();
 
    s.pop();
 
    
    print(s);
 
   
    cout << x << " ";
 
    
    //s.push(x);
}

bool findRedudantbracket(string & str)
{
    stack<int>s;
    for(int i= 0;i<str.length();i++)
    {
        char ch =str[i];
        if(ch=='(' || ch=='+' || ch== '-' || ch=='*'||ch=='/')
         {
             s.push(ch);
         }
         else
         {
             bool redundant=true;
             if(ch == ')')
             {
                 while(s.top() !='(')
                 {
                     char top =s.top();
                     if(top =='+'|| top =='-'|| top=='*'|| top=='/')
                     {
                         redundant =false;
                     }
                     s.pop();
                  }
                  if(redundant == true)
                  return true;
                  s.pop();
             }
         }
    }
    return false;
}
int main()
{
    string str ="((a+b))";
    
    bool r=findRedudantbracket(str);
    if(r)
    cout<<"redundant";
    else
    cout<<"not redundant";
    
    
    
    
}