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
int getlength(Node* head)
{
    Node * temp = head;
    int count =0;
    while(temp != NULL)
    {
        temp =temp->next;
        count++;
    }
    return count;

}
Node* middleNode(Node* head) 
{
    int len =getlength(head);
    int ans = len/2;
    Node * temp=head;
      while(ans--)
      {
          temp=temp->next;
      }
     
    return temp;
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
    Node* n ;
    //cout<<n->data<<" ";
    //cout<<n->next<<endl;
    //Node* b =new Node(10);
    //print(b);
    //cout<<b->data<<" ";
    Node* head =n;
    insertAtHead(head,6);
    print(head);
   
    insertAtHead(head,5);
    print(head);
   
    insertAtHead(head,4);
    print(head);
   
   insertAtHead(head,3);
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,1);
    print(head);
    
    Node* r = middleNode(head);
    
    print(r); 
        return 0;
}