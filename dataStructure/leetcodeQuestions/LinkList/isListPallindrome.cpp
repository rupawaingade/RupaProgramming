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
int getLength(Node*head)
{
    Node*temp=head;
    int count =0;
    while(temp->next != NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
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
Node* reverse(Node* head)
{
    int length =getLength(head);
    int mid= length/2;
    Node*temp =head;
    while(mid--)
    {
        temp=temp->next;
    }
    Node*current =temp->next;
    Node*compare =temp->next;
    Node*previous = NULL;
    Node* Next=NULL;
    while(current != NULL)
    {
        Next =current->next;
        current->next=previous;
        previous=current;
        current=Next;
    }
    
       return previous;


}
bool Pallindrome(Node* head) 
{
    if(head == NULL && head->next ==NULL)
    return true;
   Node* l1=head;
   Node* l2=reverse(head);
   while(l2 != NULL)
   {
       if(l1->data != l2->data)
       {
           return false;
       }
       else
       {
           l1=l1->next;
           l2=l2->next;
       }
       
   }
       
   return true;

  
} 
bool pallindromeWithExtraSpace(Node * head)
{
    vector<int>arr;
    Node * temp=head;
    while(temp != NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int length=arr.size();
    int s=0;
    int e =length-1;
    while(s<=e)
    {
        if(arr[s] != arr[e])

        {
            return false;
        }
        else
        {
        s++;
        e--;
        }
    }
    return true;
}      

int main()
{
    Node* n =new Node(3);
   
    //cout<<n->data<<" ";
    //cout<<n->next<<endl;
    //Node* b =new Node(10);
    //print(b);
    //cout<<b->data<<" ";
    Node* head =n;
    Node* n1 =new Node(4);
    Node* n2 =new Node(5);
    Node* n3 =new Node(5);
    Node* n4 =new Node(4);
    Node* n5 =new Node(3);
    n->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    //n5->next=n;
   // print(head);
    bool r=Pallindrome(head);
    if(r)
    cout<<"pallindrome";
    else
    cout<<"not pallindrome";
    cout<<endl;
    
  
}