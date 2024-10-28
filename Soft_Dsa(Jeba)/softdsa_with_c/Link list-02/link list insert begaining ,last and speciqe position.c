#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int k;
struct node *head=NULL;
struct node *tail=NULL;

void insert(int value)
{
    struct node *NewNode;
    NewNode=(struct node *)malloc(sizeof(struct node));
    NewNode->data=value;
    NewNode->next=NULL;
    if(head==NULL)
    {
        head=NewNode;
    }
    else
    {
        tail->next=NewNode;
    }

        tail=NewNode;
    return;
}

void showlist()
{
    struct node *curr=head;
    int j=1;
    while(curr!=NULL)
    {
        printf("\n\n%d th Node value= %d",j,curr->data);
        curr=curr->next;
        j++;
    }

    printf("\n\n");
    return;
}

void length()
{
    k=0;
    struct node *count=head;
    while(count!=NULL)
    {
        k++;
        count=count->next;
    }
}

void insertbe(int info)
{
    struct node *headnode;

    headnode=(struct node*)malloc(sizeof(struct node));
    headnode->data=info;
    headnode->next=head;
    head=headnode;
}

void insertla(int info)
{
    struct node *tailnode;
    tailnode=(struct node*)malloc(sizeof(struct node));
    tailnode->data=info;
    tail->next=tailnode;
    tail=tailnode;
    tail->next=NULL;
}

void insertmi(int prev, int newd)
{
    struct node *curr=head;
    struct node *newnode;
   // curr=(struct node*)malloc(sizeof(struct node));
    newnode=(struct node*)malloc(sizeof(struct node));


    while(curr->next!=NULL)
    {
        if(curr->data==prev)
        {
            newnode->data=newd;
            newnode->next=curr->next;
            break;
        }

        curr=curr->next;
    }
    curr->next=newnode;
    return;
}



int main()
{
    int n;
    printf("\nEnter the number of nodes=");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int info;
        printf("\n%d th element= ",i+1);
        scanf("%d",&info);
        insert(info);
    }
    showlist();
    printf("\nNext of tail=%d",tail->next);

    length();

    printf("\n\nTotal element number of the list= %d.\n\n",k);
    int ele,newelement,prevdata,ch;
    printf("\n\n\nDo you want to insert element in the list?\n\nType 1 to Insert new element.\nType 2 to return.\nPress=");
    scanf("%d",&ele);
    if(ele==1)
    {
        printf("\nEnter 1 to add data in beginning.\nEnter 2 to add data at end.\nEnter 3 to add data in specific position.\nPress=");
        scanf("%d",&ch);
        if(ch==1)
        {
        printf("\n\nEnter the value you want to add=");
        scanf("%d",&newelement);
        insertbe(newelement);
        showlist();

        }
        else if(ch==2)
        {
        printf("\n\nEnter the value you want to add=");
        scanf("%d",&newelement);
        insertla(newelement);
        showlist();
        }

        else if(ch==3)
        {
            printf("\n\nAfter which data you want to store next data?\nEnter=");
            scanf("%d",&prevdata);
            printf("\n\nEnter the data you want to store=");
            scanf("%d",&newelement);
            insertmi(prevdata,newelement);
            showlist();
        }
    }

   return 0;

}

