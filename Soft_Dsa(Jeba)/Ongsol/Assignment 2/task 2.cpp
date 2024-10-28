#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node*next;

}
*head=NULL,*newnode,*temp,*prevnode,*dup;
void create()
{
	int choice=1;
	while(choice==1)
	{
		 newnode=new node;
		 cout<< "Enter data\n";
		 cin>>newnode->data;
		 newnode->next=NULL;
		 if(head==NULL)
		 {
		 	head=temp=newnode;
		 }
		 else
		 {
		 	temp->next=newnode;
		 	temp=newnode;
		 }
		 cout<< "Do you want to continue(0/1)?\n";
		 cin>>choice;
	}
}
void delete_duplicates()
{
	prevnode=NULL;
	temp=head;
	while(temp!=NULL && temp->next!=NULL)
	{
		prevnode=temp;
		while(prevnode->next!=NULL)
		{
			if(temp->data==prevnode->next->data)
			{
				dup=prevnode->next;
				prevnode->next=prevnode->next->next;
				free(dup);
			}
			else
			{
				prevnode=prevnode->next;
			}
		}
		temp=temp->next;
	}
}
void display()
{
	temp=head;
	cout<< "Your linkelist is:: \n";
	while(temp!=NULL)
	{
		cout<<temp->data<< "-->";
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<< "null\n";
	}
}
int main()
{
	create();
	display();
	delete_duplicates();
	display();
}

