#include<iostream>
#include<string>
#include <climits>
#include<queue>
#include<stack>

using namespace std;
class Queue
{
      stack<int>s1,s2;
    public:

    void enqueue(int data)
    {
       
       s1.push(data); 

    }

    int dequeue()
    {
        
        if(s1.empty() &&s2.empty())
        {
            cout<<"queue is empty.";
            exit(0);
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int top=s2.top();
        s2.pop();
        return top;
    }
    
};
int main()
{
    vector<int>data={1,2,3,4,5};
    Queue q;
    for(int i=1;i<data.size();i++)
    {
        q.enqueue(i);
    }
    cout << endl;
    cout << q.dequeue() << endl;   
    cout << q.dequeue() << endl;  
    cout << q.dequeue() << endl;   
    cout << q.dequeue() << endl;  
    
}