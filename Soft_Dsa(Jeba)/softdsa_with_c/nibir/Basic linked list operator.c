#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void insert(int val)
{
    struct node *newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode-> info=val;
    newNode-> next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        tail-> next=newNode;
    }
    tail=newNode;
    return;
}

void insert_begin(int val)
{
    struct node *newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->info =val;
    newNode->next=head;
    head=newNode;
    return;
}

void show_list()
{
    struct node *curr=head;

    while(curr!=NULL)
    {
        printf("%d",curr->info);
        curr=curr->next;
    }
    return;
}

int main()
{
    int n;
    scanf("%d",n);
    for(int i=0;i<n;i++)
    {
        int info;
        info=rand()%100;
        insert(info);
    }
    show_list();

    printf("\nInsert value at the beginning=");
    int begin;
    scanf("%d",&begin);
    insert_begin(begin);
    printf("\nAfter Inserting value:\n");
    show_list();

/*    printf("\nInsert value at a specific position: Enter position first next Enter value= ");
    int a,specific;
    scanf("%d %d",&n,&specific);
    insert_specific(specific);

    printf("\nAfter Inserting value=\n");
    show_list(); */
    return 0;
}
