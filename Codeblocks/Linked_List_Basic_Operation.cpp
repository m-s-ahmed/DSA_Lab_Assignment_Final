#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
    public: int data;
                Node *next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(Node*&head, int d)
    {
        //new node create
        Node *temp=new Node(d);
        temp->next=head;
        head=temp;
    }
void insertattail(Node*&tail,int d)
    {
        //new node create
        Node *temp=new Node(d);
        tail->next=temp;
        tail=tail->next;
    }

void insertatposition(Node*&head, Node*&tail, int position,int data)
    {
        if(position==1)
        {
            insertathead(head,data);
            return;
        }

        Node *temp=head;
        int cnt=1;

        while(cnt<position-1)
        {
            temp=temp->next;
            cnt++;
        }

        if(temp->next==NULL)
        {
            insertattail(tail,data);
            return ;
        }

        Node *nodetoinsert=new Node(data);
        nodetoinsert->next=temp->next;
        temp->next=nodetoinsert;
    }
    //For print

    void print(Node*&head)
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
        cout<<endl;
    }

int main()
{
    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;

    print(head);

    insertathead(head,15);
    print(head);

    insertattail(tail,50);
    print(head);

    insertatposition(head,tail,3,22);
    print(head);

    return 0;
}
