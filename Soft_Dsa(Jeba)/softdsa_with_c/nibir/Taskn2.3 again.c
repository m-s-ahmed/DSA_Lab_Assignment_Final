#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;
void insert(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;

    }
    else
    {
        tail->next=newnode;
    }
    tail=newnode;
    return;
}
int k;
void display()
{
    struct node *current=head;
    k=1;
    while(current!=NULL)
    {
        printf(" %d->",current->data);
        k++;
        current=current->next;
    }
    printf("NULL");
}

/*void swap()
{
    struct node *cur=head;
    int temp;
    while(cur!=NULL)
    {
        temp=cur->data;
        cur->data=cur->next->data;
        cur->next->data=temp;
        cur=cur->next->next;
    }
    return;
}
*/
void reorder()
{
    struct node *nibir;

}

int main()
{
    printf("Enter the number of node=");
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        int val;
        printf("\n%d th element=",i+1);
        scanf("%d",&val);
        insert(val);
    }
    printf("\nBefore swap:");
    display();
    printf("\nAfter reorder:");
    reorder();
    display();
}
