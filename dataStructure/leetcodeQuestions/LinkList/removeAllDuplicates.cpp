#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>

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

Node* sortList(Node* head)
{
    map<int,int>Visited;
    Node * current =head;
    Node *previous =NULL;
    if(head == NULL)
    {
        return NULL;
    }
    while(current != NULL)
    {
        Visited[current->data]+=1;
        current=current->next;
       
    }
   

        if(Visited[current->data]<=1)
       {
           previous=current;
           current=current->next;
       
       }
       else
       {
         previous->next=current->next;
        delete current;
        current=previous->next;
        
       }

   
   return head;
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
    Node* n =new Node(4);
   
    //cout<<n->data<<" ";
    //cout<<n->next<<endl;
    //Node* b =new Node(10);
    //print(b);
    //cout<<b->data<<" ";
    Node* head =n;
    Node* n1 =new Node(5);
    Node* n2 =new Node(4);
    Node* n3 =new Node(7);
    Node* n4 =new Node(7);
    Node* n5 =new Node(3);
    n->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    print(head);
    Node * r =sortList(head);
    print(r);
    cout<<endl;
    
  
}