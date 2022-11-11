#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;
void solve(stack<int>&s,int count,int size)
{
    if(count == size/2)
    {
       s.pop();
       return;
    }
    int num=s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
    // cout<<num<<" ";
}
void deleteMiddleNum(stack<int>&s,int size)
{
    int count=0;
    solve(s,count,size);
    
    
}

void print(stack<int>s,int count, int size)
{
    if(count == size)
    {
       return;
    }
    int num=s.top();
    s.pop();
    print(s,count+1,size);
    s.push(num);
     cout<<num<<" ";
}

int main()
{
    vector<int>num ={1,2,3,4,5};
    stack<int>s;
    for(int i=0;i<num.size();i++)
    {
        char ch=num[i];
        s.push(ch);
    }
    deleteMiddleNum(s,5);
    print(s,0,s.size());
    
    
}#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;
void solve(stack<int>&s,int count,int size)
{
    if(count == size/2)
    {
       s.pop();
       return;
    }
    int num=s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
    // cout<<num<<" ";
}
void deleteMiddleNum(stack<int>&s,int size)
{
    int count=0;
    solve(s,count,size);
    
    
}

void print(stack<int>s,int count, int size)
{
    if(count == size)
    {
       return;
    }
    int num=s.top();
    s.pop();
    print(s,count+1,size);
    s.push(num);
     cout<<num<<" ";
}

int main()
{
    vector<int>num ={1,2,3,4,5};
    stack<int>s;
    for(int i=0;i<num.size();i++)
    {
        char ch=num[i];
        s.push(ch);
    }
    deleteMiddleNum(s,5);#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
using namespace std;
void solve(stack<int>&s,int count,int size)
{
    if(count == size/2)
    {
       s.pop();
       return;
    }
    int num=s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
    // cout<<num<<" ";
}
void deleteMiddleNum(stack<int>&s,int size)
{
    int count=0;
    solve(s,count,size);
    
    
}

void print(stack<int>s,int count, int size)
{
    if(count == size)
    {
       return;
    }
    int num=s.top();
    s.pop();
    print(s,count+1,size);
    s.push(num);
     cout<<num<<" ";
}

int main()
{
    vector<int>num ={1,2,3,4,5};
    stack<int>s;
    for(int i=0;i<num.size();i++)
    {
        char ch=num[i];
        s.push(ch);
    }
    deleteMiddleNum(s,5);
    print(s,0,s.size());
    
    
}
    print(s,0,s.size());
    
    
}