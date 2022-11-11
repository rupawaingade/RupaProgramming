#include<iostream>
#include<string>
#include <climits>
#include<queue>
#include<stack>
using namespace std;
queue<int> Reverse(queue<int>q,int k)
{
   stack<int>s;
   for(int i=0;i<=q.size();i++)
   {
       int val=q.front();
       q.pop();
       s.push(val);
   }
   while(!s.empty())
   {
       int val=s.top();
       s.pop();
       q.push(val);
   }
   int r=q.size()-k;
   while(r--)
   {
       int val=q.front();
       q.pop();
       q.push(val);
   }

   return q;

}
int main()
{
     queue<int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
    queue<int>r= Reverse(q,3);
    while(!r.empty())
    {
        int val=r.front();
        r.pop();
        cout<<val<<" ";
    }
    
}