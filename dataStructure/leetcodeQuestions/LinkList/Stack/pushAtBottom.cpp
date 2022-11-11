#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;

void print(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
       return;
    }
    int num=s.top();
    s.pop();
    print(s,x);
    s.push(num);
     cout<<num<<" ";
}
void solve(stack<int>&s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int num =s.top();
    s.pop();
    solve(s,x);
    s.push(num);
   
}
stack<int> pushAtBottom(stack<int>&s,int x)
{
    solve(s,x);
    
    return s;
}

int main()
{
    vector<int>num ={1,2,3,4,5};
    stack<int>s;
    for(int i=0;i<num.size();i++)
    {
        int n =num[i];
        s.push(n);
    }
    s=pushAtBottom(s,-1);
    
    print(s,-1);
    
    
}