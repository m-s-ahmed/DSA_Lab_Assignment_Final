
#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int queue[N];
int top=-1;
int start=-1;
int rear=-1;
void stack_push();
void stack_pop();
void stack_display();
void stack_free();
void queue_push();
void queue_pop();
void queue_display();
void queue_free();
int main(){
char cha;
printf("Enter mode s for stack and q for queue:");
scanf("%c",&cha);
if(cha=='s'){
    printf("STACK MODE ON!");
    int choice;

    do{
    printf("Enter choice for stack operation push(1),pop(2),display(3),free memory(4),stop(0):");
    scanf("%d",&choice);
    switch(choice){
    case 1:{
    stack_push();
    break;
    }
    case 2:{
    stack_pop();
    break;
    }
    case 3:{
    stack_display();
    break;
    }
    case 4:{
    stack_free();
    break;
    }
    }
    }
    while(choice!=0);
printf("Thank you for performing stack operation");
}
else if(cha=='q'){
       printf("QUEUE MODE ON!");
    int choice;

    do{
    printf("Enter choice for queue operation push(1),pop(2),display(3),free memory(4),stop(0):");
    scanf("%d",&choice);
    switch(choice){
    case 1:{
    queue_push();
    break;
    }
    case 2:{
    queue_pop();
    break;
    }
    case 3:{
    queue_display();
    break;
    }
    case 4:{
    queue_free();
    break;
    }
    }
    }
    while(choice!=0);
printf("Thank you for performing queue operation");
}
else{
    printf("Invalid mode!");
}
}
void stack_push(){
    int item;
printf("Enter data for push an element in the stack:");
scanf("%d",&item);
if(top==N-1){
    printf("OVERFLOW!");
}
else{
    top++;
    stack[top]=item;
}
}
void stack_pop(){
if(top==-1){
    printf("UNDERFLOW!");
}
else{
    printf("The delete element is=%d",stack[top]);
    top--;
}
}
void stack_display(){
    printf("Stack element is:");
for(int i=top;i>=0;i--){
    printf("  %d",stack[i]);
}
printf("\n");
}
void stack_free(){
for(int i=top;i>=0;i--){
    free(stack[top]);
}
}
//queue operations
void queue_push(){
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
void queue_pop(){
if(start==-1&&rear==-1){
    printf("UNDERFLOW!/");
}
else{
        printf("The delete element is:%d/",queue[start]);
    start++;
}
}
void queue_display(){
printf("The queue element is:/");
for(int i=start;i<=rear;i++){
    printf("%d/",queue[i]);
}
printf("/");
}
void queue_free(){
for(int i=start;i<=rear;i++){
    free(queue[i]);
}
}
