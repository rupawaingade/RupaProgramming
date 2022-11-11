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
 
    
    
}

void sortedInsert(stack<int>&s,int num)
{
    if((s.empty())||(!s.empty()&&s.top()<num))
    {
        s.push(num);
       
        return;
    }
    int n =s.top();
    s.pop();
    sortedInsert(s,num);
    s.push(n);
    
}
void sortStack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int n =s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s,n);
   
}
int main()
{
    vector<int>num ={3,7,1,4,1};
    stack<int>s;
    for(int i=0;i<num.size();i++)
    {
        int n =num[i];
        s.push(n);
    }
    sortStack(s);
    print(s);
    
    
    
}