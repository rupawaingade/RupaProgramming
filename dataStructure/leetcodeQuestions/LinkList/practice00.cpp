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
Node* KreverseList(Node* &head,int k) 
{
    int len=0;
    Node * temp=head;

    while(temp != NULL)
    {
        temp = temp->next;
       len++;

    }

    if(head == NULL)
    return NULL;
    Node* current =head;
    Node* previous =NULL;
    Node* forward =NULL;
    int count =0;
     while(current != NULL  && count < k)
     {
         forward=current->next;
         current->next =previous;
         previous = current;
         current =forward;
         count++;
     }
     if(forward != NULL && len-count>=k)
     {
     head->next = KreverseList(forward,k);
     }
     else
     {
        head->next =KreverseList()
     }
     return previous;  

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
    insertAtTail(tail,7);
    print(head);
    
    //insertAtPosition(head,tail,3,22);
    //print (head);
    //deleteNode(head,tail,5);
   // print (head);
    //cout<<endl;
    //cout<<"tail is"<<tail->data<<endl;
    //cout<<"head is"<<head->data;
    Node* result = KreverseList(head,3);
    print(result);
}