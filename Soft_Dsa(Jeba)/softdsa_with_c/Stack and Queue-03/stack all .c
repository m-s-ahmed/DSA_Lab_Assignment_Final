
#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void stack_push();
void stack_pop();
void stack_display();
void stack_free();
int main(){
int choice;

    do{
    printf("\nEnter choice for stack operation push(1),pop(2),display(3),free memory(4),stop(0):");
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

