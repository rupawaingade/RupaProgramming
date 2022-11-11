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
    Node* next;
    Node(int data)
    {
        this->data =data;
        this->next =NULL;
    }
};

void insertAtHead(Node *&head,int data)
{
    Node *temp =new Node(data);
    temp->next =head;
    head =temp;
}
void insertAtTail(Node* &tail,int data)
{
    Node *temp =new Node(data);
    tail->next =temp;
    tail =temp;


}
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    Node* temp =head;
    Node* nodeToInsert =new Node(data);
    int count = 1;;
    if(position == 1)
    {
        insertAtHead(head,data);
        return;
    }
    
      
    while(count < position-1)
    {
        temp =temp->next;
        count++;
    }
    if(temp->next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }
    nodeToInsert->next =temp->next;
    temp->next = nodeToInsert;
    


}
void deleteNode(Node* &head,Node* &tail,int position)
{
    Node *temp =head;
    if(position == 1)
    {
        head =head->next;
        temp->next =NULL;
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
           
            previous->next =current->next;
            current->next = NULL;
             if (previous->next == NULL) 
             {
             tail = previous;
             }
            delete current;
        
    }
    
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
Node* reverseList(Node* &head) 
{
    Node* current =head;
    Node* previous =NULL;
    Node* forward =NULL;
     while(current != NULL)
     {
         forward=current->next;
         current->next =previous;
         previous = current;
         current =forward;
     }
     head =previous;

     return head;

        
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
    insertAtHead(head,1);
    print(head);
   
   insertAtHead(head,-1);
    print(head);
    Node * tail =n;
    insertAtTail(tail,10);
    print(head);
    insertAtPosition(head,tail,3,22);
    print (head);
    deleteNode(head,tail,5);
    print (head);
    cout<<endl;
    cout<<"tail is"<<tail->data<<endl;
    cout<<"head is"<<head->data;
    Node* result = reverseList(head);
    print(result);

        return 0;
}