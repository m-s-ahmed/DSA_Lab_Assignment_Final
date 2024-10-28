
#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];

int start=-1;
int rear=-1;

void queue_insert();
void queue_delete();
void queue_display();
void queue_free();


int main(){
    int choice;

    do{
    printf("Enter choice for queue operation Insert(1),Delete(2),display(3),stop(0):");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    queue_insert();
    break;

    case 2:
    queue_delete();
    break;

    case 3:
    queue_display();
    break;

    }
    }
    while(choice!=0);
printf("Thank you for performing queue operation");
}
void queue_insert(){
   int item;
printf("Enter data for push an element in the queue:");
scanf("%d",&item);
if(start==-1&&rear==-1){
    start=0;
    rear=0;
    queue[rear]=item;
}
else if(rear==N-1){
    printf("OVERFLOW!/");
}
else{
    rear++;
    queue[rear]=item;
}
}


void queue_delete(){
if(start==-1&&rear==-1){
    printf("UNDERFLOW!/");
}
else{
        printf("The delete element is:%d  ",queue[start]);
    start++;
}
printf("\n");
}


void queue_display(){
printf("The queue element is:  ");
for(int i=start;i<=rear;i++){
    printf("%d  ",queue[i]);
}
printf("\n");
}
