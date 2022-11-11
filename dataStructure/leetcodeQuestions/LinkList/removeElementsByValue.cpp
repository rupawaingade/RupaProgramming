#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include <cassert>

using namespace std;

class Node{
public:
    int data;
    //Node* previous;
    Node* next;
    Node(int data)
    {
        this->data =data;
        //this->previous=NULL;
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
// Node* removeElements(Node* head, int val) 
// {
//     Node* current=head;
//     Node* previous=NULL;
//     Node* forward=current->next;
//     if(head == NULL)
//     {
//         return NULL;
//     }
//     while(current != NULL)
//     {
//         if(current->data == val)
//         {
//             previous =current->next;
//             delete current;
//             current->next=NULL;
//             current=forward;
//             forward =forward->next;
//         }
//         else
//         {
//             if(forward !=NULL)
//             previous=current;
//             current = forward;
//             forward=forward->next;
            
            
//         }
//     }
//     return head;
// }

Node* removeElements(Node* head, int val) 
{
    if (head == NULL) return NULL;
    while(head && head->data == val)
    {
        Node *tmp = head->next;
        delete head;
        head = tmp;
    }

    if (head == NULL) return NULL;

    Node *current = head->next;
    Node *prev = head;
    while(current != NULL)
    {
        if (current->data == val)
        {
            Node *tmp = current->next;
            prev->next = tmp;
            delete current;
            current = tmp;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
    return head;
}

int main()
{
    {
        assert((NULL == removeElements(NULL,0)));
    }

    {
        Node* head = new Node(3);
        assert(NULL == removeElements(head,3));
    }

    {
        Node* head = new Node(3);
        Node* n1 =new Node(3);
        Node* n2 =new Node(5);
        Node* n3 =new Node(7);
        Node* n4 =new Node(7);
        Node* n5 =new Node(9);
        head->next=n1;
        n1->next=n2;
        n2->next=n3;
        n3->next=n4;
        n4->next=n5;
        
        Node* r=removeElements(head,3);
        print(r);
    }

    {
        Node* head = new Node(3);
        Node* n1 =new Node(4);
        Node* n2 =new Node(5);
        Node* n3 =new Node(3);
        Node* n4 =new Node(3);
        Node* n5 =new Node(9);
        head->next=n1;
        n1->next=n2;
        n2->next=n3;
        n3->next=n4;
        n4->next=n5;
        
        Node* r=removeElements(head,3);
        print(r);
    }

    {
        Node* head = new Node(9);
        Node* n1 =new Node(4);
        Node* n2 =new Node(9);
        Node* n3 =new Node(3);
        Node* n4 =new Node(9);
        Node* n5 =new Node(9);
        head->next=n1;
        n1->next=n2;
        n2->next=n3;
        n3->next=n4;
        n4->next=n5;
        
        Node* r=removeElements(head,9);
        print(r);
    }
}


// int main()
// {
//     Node* n =new Node(3);
   
//     //cout<<n->data<<" ";
//     //cout<<n->next<<endl;
//     //Node* b =new Node(10);
//     //print(b);
//     //cout<<b->data<<" ";
//     Node* head =n;
//     Node* n1 =new Node(4);
//     Node* n2 =new Node(5);
//     Node* n3 =new Node(7);
//     Node* n4 =new Node(7);
//     Node* n5 =new Node(9);
//     n->next=n1;
//     n1->next=n2;
//     n2->next=n3;
//     n3->next=n4;
//     n4->next=n5;
//     //n5->next=n;
//    // print(head);
//     Node* r=removeElements(head,7);
    
//     print(r);
//     cout<<endl;
    
  
// }

Node* removeElement(Node* head, int val)
{
    if (head == NULL) return NULL;
    while(head && head->data == val)
    {
        Node *tmp = head->next;
        delete head;
        head = tmp;
    }

    if (head == NULL) return NULL;

    Node *current = head->next;
    Node *prev = head;
    while(current != NULL)
    {
         if (current->data == val)
         {
            Node *tmp = current->next;
            prev->next = tmp;
            delete current;
            current = tmp;
         }
         else
         {
             prev = current;
             current = current->next;
         }
    }
    return head;
}



{
    null --> NULL
    3 -> NULL
    3, 3 --> NULL
    3,3,4 --> 4
    3,3,3,3,3,4 --> 4
    1,2,5,7,3 --> 1,2,5,7
    1,2,5,7,3,3,3,3 --> 1,2,5,7
    1,2,3,3,3,5,7,3,3,3,3 --> 1,2,5,7
    3,3,3,3,1,2,3,3,3,5,7,3,3,3,3 --> 1,2,5,7
}