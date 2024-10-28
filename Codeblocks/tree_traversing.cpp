#include<bits/stdc++.h>
using namespace std;

class Node
{
    public: int data;
                Node *left;
                Node *right;

        //Constructor
        Node(int v)
        {
            this->data=v;
            this->left= this->right=NULL;
        }
};

void inorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left);
    cout << root->data <<" ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }

    cout << root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data <<" ";
}



//Driver Code

int main()
{
    Node *root= new Node(100);
    root->left= new Node(20);
    root->right= new Node(200);
    root->left->left= new Node(10);
    root->left->right= new Node(30);
    root->right->left= new Node(150);
    root->right->right= new Node(300);

    cout<<"Inorder Traversing is "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversing is "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversing is "<<endl;
    postorder(root);

    return 0;
}

