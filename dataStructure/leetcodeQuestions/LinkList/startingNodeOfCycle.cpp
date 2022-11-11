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

Node* isCyclePresent(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
     while(slow != NULL && fast != NULL)
     {
         fast =fast->next;
         if(fast != NULL)
         {
             fast=fast->next;
         }
         slow = slow->next;
         if(fast == slow)
         return slow;

     }
     return NULL;
}
Node* startingNode(Node* head)
{
    
    if(head == NULL)
    {
        return NULL;
    }
    Node* Intersection =isCyclePresent(head);
    Node* slow = head;
      while(slow != Intersection)
      {
          slow = slow->next;
          Intersection = Intersection->next;
      }
    return slow;
}

/*void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    Node* startOfLoop=startingNode(head);
    Node* temp =startOfLoop;
    while(temp->next != startOfLoop)
    {
        temp =temp->next;
    }
    temp->next =NULL;
}*/
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
    Node* n =new Node(4);
   
    //cout<<n->data<<" ";
    //cout<<n->next<<endl;
    //Node* b =new Node(10);
    //print(b);
    //cout<<b->data<<" ";
    Node* head =n;
    Node* n1 =new Node(5);
    Node* n2 =new Node(6);
    Node* n3 =new Node(7);
    n->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next =n1;
    Node* r =startingNode(head);
    cout<<r->data;
    //Node* tail=n;
    
    //print(head);
    cout<<endl;
    
}