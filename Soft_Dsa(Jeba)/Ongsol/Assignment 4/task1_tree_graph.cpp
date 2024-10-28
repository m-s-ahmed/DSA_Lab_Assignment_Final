#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val)
{
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }

    return root;
}

void inorder(Node* root)
{
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* search(Node* root, int key)
{
    if(root == NULL) return NULL;
    if(root->data == key) return root;
    if(root->data < key) return search(root->left, key);
    return search(root->right, key);
}

int main()
{
    Node* root = NULL;
    cout<<"How many number do you want to enter: ";
    int n;
    cin>>n;
    int x;

    srand(time(0));
    cout<<"generated data"<<endl;
    for(int i=0;i<n;i++){
        x = rand()%100 + 1;
        cout<<x<<" ";
        if(i == 0){
            root = insert(root, x);
        }
        else{
            insert(root, x);
        }
    }
    cout<<endl;
    cout<<"Inorder order:"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Enter a value for insert: ";
    cin>>x;
    insert(root, x);

    cout<<"after insertion:"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Enter a value for search: ";
    cin>>x;

    if(search(root, x)) cout<<"Exists"<<endl;
    else{
        cout<<"Not exists"<<endl;
    }
    return 0;
}
