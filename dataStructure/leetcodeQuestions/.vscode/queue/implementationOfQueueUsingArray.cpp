#include<iostream>
#include<string>
#include <climits>
#include<queue>
#include<stack>
using namespace std;

class queue
{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    queue()
    {
        size =100001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    void enqueue(int data)
    {
        if(rear == size)
        {
            cout<<"queue is full.";
        }
        else
        {
            arr[rear]=data;
            rear++;
        }

    }
    int dequeue()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront ==rear)
            {
                qfront =0;
                rear=0;
            }
            return ans;
        }

    }
    int front()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
    bool isEmpty()
    {
        if(qfront == rear)
        {
            return true;

        }
        else
        {
            return false;
        }
    }

};
int main()
{
   // cout << (-1)%1<< endl;
    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    //d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();

    if(d.empty()) {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty " << endl;
    } 
    
}