#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data =data;
        this->next =NULL;
    }
};

void insert(Node* &tail,int element,int data)
{
    if(tail == NULL)
    {
        Node *insertNode = new Node(data);
        tail = insertNode;
        insertNode->next = insertNode;
    }
    else
    {
        Node *current =tail;
        while(current->data != element)
        {
           current=current->next;
        }
    
        Node* temp =new Node(data);
        temp->next =current->next;
        current->next =temp;
    }
}
/*void DeleteNode(Node * &tail,int data)
{
    if(tail == NULL)
    {
        cout<<"list is Empty"<<endl;
    }
    else
    {
        Node* temp=tail;
        while()

    }
} */
void print(Node* &tail)
{
    Node* temp=tail;
    if(tail == NULL)
    {
        cout<<"Empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail =tail->next;

    }while(tail != temp);
    cout<<endl;
}



int main()
{
    Node* tail=NULL;
    insert(tail,1,3);
    print(tail);
    insert(tail,3,2);
    print(tail);
    insert(tail,2,7);
    print(tail);
    insert(tail,7,9);
    print(tail);
    insert(tail,9,5);
    print(tail);
    insert(tail,7,10);
    print(tail);
  return 0;  
}