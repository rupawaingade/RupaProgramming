#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;
bool validperenthesis(string expression)
{
   stack<char>s;
   for(int i=0;i<expression.length();i++)
   {
       char ch=expression[i];
       if(ch == '('|| ch =='{' || ch =='[')
       {
           s.push(ch);

       }
       else
       {
           if(!s.empty())
           {
             char top = s.top();
             if((ch == ')' && top == '(') ||(ch == '}' && top == '{')||(ch == ']' && top == '['))
             {
               s.pop();
             }
          
             else
             {
               return false;
             }
           }
           else
           {
               return false;
           }
       }
   }
   if(s.empty())
   {
       return true;
   }
   else
   {
       return false;
   }
}


int main()
{
    vector<int>num ={1,2,3,4,5};
    stack<int>s;
    string expression="{[()]}";
   
    bool r =validperenthesis(expression);
    if(r)
    {
        cout<<"balance expression";
    }
    else
    {
        cout<<"inbalance expression";
    }
    
}