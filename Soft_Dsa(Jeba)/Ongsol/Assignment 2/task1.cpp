#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node*next;
}*head=NULL,*newnode,*temp,*prevnode,*nextnode;
void create()
{
	int choice=1;
	while(choice==1)
	{
	newnode=new Node;
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
	cout<< "Do you want to continue 0/1?"<<endl;
	cin>>choice;
	}
}
void at_beg()
{
	newnode=new Node;
	cout<< "Insert at begining"<<endl;
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
}
void at_end()
{
	newnode=new Node;
	cout<< "Insert at end\n";
	cin>>newnode->data;
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
int Count()
{
	temp=head;
	int Count=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		Count++;
	}
	cout<<Count<<endl;
	return Count;
}
void after_position()
{
	int i=1,x;
	int pos;
	cout<< "Enter position\n";
	cin>>pos;
	x=Count();
	if(pos>x)
	{
		cout<< "Invalid position\n";
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		newnode=new Node;
		cout<< "Enter a data\n";
		cin>>newnode->data;
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
void deleteFrom_beg()
{
	temp=head;
	if(head->next==0)
	{
		head=0;
		free(temp);
	}
	head=head->next;
	free(temp);
}
void deleteFrom_end()
{
	temp=head;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==head)
	{
		head=NULL;
	}
	else
	{
		prevnode->next=NULL;
	}
	free(temp);
}
void deleteFrom_pos()
{
	int pos,i=1;
	temp=head;
	cout<< "Enter a position:\n";
	cin>>pos;
	if(pos==1)
	{
		deleteFrom_beg();
	}
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}
void display()
{
	temp=head;
	cout<< "Your likedlist is::"<<endl;
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
	int ch;
	do
	{
		cout<< "1.Node create\n2.Insert at begin\n3.Insert at end\n4.Insert after given position\n5.delete from begin\n6.delete from end\n7.delete after a given position\n8.count node\n9.display linkedlist\n";
		cout<< "Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
		case 1:
			create();
			break;
		case 2:
			at_beg();
			break;
		case 3:
			at_end();
			break;
		case 4:
			after_position();
			break;
		case 5:
			deleteFrom_beg();
			break;
		case 6:
			deleteFrom_end();
			break;
		case 7:
			deleteFrom_pos();
			break;
		case 8:
			Count();
			break;
		case 9:
			display();
			break;
		default:
			cout<< "Invalid choice\n";
			break;
		}
	}
	while(ch!=0);
	return 0;
}
