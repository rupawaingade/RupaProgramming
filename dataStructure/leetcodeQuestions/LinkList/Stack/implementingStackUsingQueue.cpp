#include<iostream>
#include<string>
#include <climits>
#include<queue>
#include<stack>

using namespace std;
class Stack
{
      queue<int>q1,q2;
    public:

    void push(int data)
    {
       
       q1.push(data); 

    }

    int pop()
    {
        
        if (q1.empty())
        {
            cout << "Stack Underflow!!";
            exit(0);
        }
 
       
        int front;
        while (!q1.empty())
        {
            if (q1.size() == 1) {
                front = q1.front();
            }
            else {
                q2.push(q1.front());
            }
 
            q1.pop();
        }
 
    
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }

         
        return front;
    }
    
};
int main()
{
    vector<int>data={1,2,3,4,5};
    Stack s;
    for(int i=1;i<=data.size();i++)
    {
        s.push(i);
    }
    cout << endl;
    cout << s.pop() << endl;   
    cout << s.pop() << endl;  
    cout << s.pop() << endl;   
    cout << s.pop() << endl;  
    cout << s.pop() << endl;  
    
}