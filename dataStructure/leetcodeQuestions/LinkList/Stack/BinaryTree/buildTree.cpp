#include<iostream>
#include<string>
#include <climits>
#include<queue>
#include<stack>

using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node *right;
  Node(int d)
  {
      this->data=d;
      this->left=NULL;
      this->right=NULL;
  }

};

Node* buildTree(Node* root)
{
    cout<<"Enter data:"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1)
    return NULL;
    cout<<"enter data for inserting left:"<<endl;
    root->left =buildTree(root->left);
    cout<<"enter data for inserting right:"<<endl;
    root->right =buildTree(root->right);
    return root;

}
void levelOrderTraversal(Node * root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node * temp =q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }

}
void reverseLevelOrderTraversal(Node * root)
{
    queue<Node*>q;
    stack<int>s;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node * temp =q.front();
        q.pop();
        s.push(temp->data);  

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

}


int main()
{
    Node* root=NULL;
    root=buildTree(root);
    levelOrderTraversal(root);
}