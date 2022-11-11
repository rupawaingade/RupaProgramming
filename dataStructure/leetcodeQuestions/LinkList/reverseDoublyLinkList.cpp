#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;

class Node{
public:
    int data;
    Node* previous;
    Node* next;
    Node(int data)
    {
        this->data =data;
        this->previous=NULL;
        this->next =NULL;
    }
};

void insertAtHead(Node * &head,Node* &tail,int data)
{
    if(head == NULL)
    {
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else
    {
    Node *temp =new Node(data);
    temp->next =head;
    head->previous=temp;
    head =temp;
    }
}
void insertAtTail(Node* &head, Node* &tail,int data)
{
    if(tail ==NULL)
    {
        Node *temp =new Node(data);
        head =temp;
        tail=temp;
    }
    else
    {
    Node *temp =new Node(data);
    tail->next =temp;
    temp->previous =tail;
    tail =temp;
    }

}
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    Node* temp =head;
    Node* nodeToInsert =new Node(data);
    int count = 1;;
    if(position == 1)
    {
        insertAtHead(head,tail,data);
        return;
    }
   
      
    while(count < position-1)
    {
        temp =temp->next;
        count++;
    }
     if(temp->next == NULL)
    {
        insertAtTail(head,tail,data);
        return;
    }
    nodeToInsert->next =temp->next;
    temp->next->previous=nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->previous=temp;
    
    


}
void deleteNode(Node* &head,Node* &tail,int position)
{
    Node *temp =head;
    if(position == 1)
    {
        head =temp->next;
        temp->next->previous =NULL;
       temp->next=NULL;
        delete temp;
    }
    
    else
    {
    
        Node *current =head;
        Node *previous = NULL;
        Node * last =tail;
        int count =1;
        while(count<position)
        {
            previous = current;
            current=current->next;
            count++;
        }
           current->previous =NULL;
           previous->next =current->next;
           current->next=NULL;
           
             if (previous->next == NULL) 
             {
             tail = previous;
             }
            delete current;
        
    }
    
}
Node* reverseDl(Node* head)
{
    Node *previous  =NULL;
    Node *current =head;
    Node * forward = NULL;
   // Node * reverse=previous;
    while(current != NULL)
    {
        
       forward=current->next;
       current->next=previous;
       current->previous=forward;
       previous=current;
       current=forward;
    }
    
    return previous;
}
void print(Node* &head)
{
    Node * temp =head;
      while(temp != NULL)
      {
          cout<<temp->data<<" ";
          temp=temp->next;
      }
      cout<<endl;
}

int main()
{
    Node* n =new Node(5);
    //cout<<n->data<<" ";
    //cout<<n->next<<endl;
    //Node* b =new Node(10);
    //print(b);
    //cout<<b->data<<" ";
    Node* head =n;
    Node* tail=n;
    insertAtHead(head,tail,1);
    print(head);
    
    insertAtTail(head,tail,100);
    print(head);
    insertAtPosition(head,tail,4,222);
    print(head);
    deleteNode(head,tail,4);
    print(head);
  // insertAtHead(head,-1);
  // print(head);
    Node* r=reverseDl(head);
    print(r);
    cout<<endl;
}  