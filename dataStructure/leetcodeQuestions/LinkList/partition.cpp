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
    int count =1;
    while(head->next != NULL)
    {
        head=head->next;
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
vector<Node*> splitListToParts(Node* head, int k) 
{  
    //if(head == NULL)
    //return NULL;
    
    Node*temp =head;
    int length=getLength(head);
    int Partition=0;
    int reminder=length%k;
    vector<Node*>result(k);
    for(int i=0;i<k;i++)
    {
        result.push_back(temp);
        Partition=(length/k);
        
        if(reminder>0)
        {
           Partition+=1;
           reminder--;
        }
       while(temp != NULL && Partition != 1)
       {

           //result.push_back(temp);
           temp=temp->next;
           Partition--;

       }

        if(temp != NULL) 
         {
          Node* newhead=temp->next;
          temp->next=NULL;
          temp=newhead;    
         }
       
    }
   
    return result;
        

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
    Node* n3 =new Node(7);
    Node* n4 =new Node(7);
    Node* n5 =new Node(9);
    Node* n6 =new Node (10);
    Node* n7 =new Node(9);
    Node* n8 =new Node (10);
    Node* n9 =new Node(9);
    
     n->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    n9->next=NULL;
    vector<Node*>r=splitListToParts(head,3);
    for(int i=0;i<r.size();i++)
    print(r[i]);
    cout<<endl;
    
  
}