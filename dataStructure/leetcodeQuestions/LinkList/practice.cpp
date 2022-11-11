#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <fstream>
#include <climits>
#include <map>

using namespace std;

class Node
{
public:
    int data;
    Node *previous;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    }
};
int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *solve(Node *list1, Node *list2)
{
    Node * temp=NULL;
    while ((list1 != NULL) &&
           (list2 != NULL))
           
    {

        if (list1->data <= list2->data || list2 == NULL)
        {
            temp=list1;
            temp=temp->next;
            list1=list1->next;
        }
        else
        {
            temp=list2;
            temp=temp->next;
            list2=list2->next;

        }
        

    }
    return temp;
    // forward->next=NULL;
}
Node *mergeTwoLists(Node *list1, Node *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    if (list1 == NULL && list2 == NULL)
        return NULL;
    Node *r = solve(list1, list2);
    
    return r;
}

int main()
{
    Node *n = new Node(-5);

    // cout<<n->data<<" ";
    // cout<<n->next<<endl;
    // Node* b =new Node(10);
    // print(b);
    // cout<<b->data<<" ";
     Node* list1 =n;
     Node* n1 =new Node(-3);
     Node* n2 =new Node(-1);
     Node* n3 =new Node(1);
     Node *n4 = new Node(6);
    
     Node* n5 =new Node(-1);
     Node* list2 =n5;
     Node* n6 =new Node(2);
     Node* n7 =new Node(5);
     n->next=n1;
     n1->next=n2;
     n2->next=n3;
     n3->next=n4;
     //n4->next=n5;
     n5->next=n6;
     n6->next=n7;
     //print(head);
    Node *r = mergeTwoLists(list1, list2);

    print(r);
    cout << endl;
}