#include<bits/stdc++.h>
using namespace std;
#define N 10
int stack1[N];
int top=-1;

void push()
{
    int x;
    if(top==N-1)
    {
        cout<<"overflow\n";
        return;
    }
    else
    {
        cout<<"enter data:\n";
        cin>>x;
        top++;
        stack1[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        cout<<"underflow\n";
        return;
    }
    else
    {
        item=stack1[top];
        top--;
        cout<<"deleted item is:\n"<<item<<endl;
    }
}

void peek()
{
   int item;
    if(top==-1)
    {
        cout<<"underflow\n";
        return;
    }
    else
    cout<<"top most element in stack is::"<<stack1[top];
cout<<endl;
}

void stack_free()
{
    for(int i=top;i>=0;i--)
    {
        free(stack1);
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        cout<<"stack is empty\n";
    }
    cout<<"items in stack is::\n";
    for(i=top;i>=0;i--)
    {
        cout<<stack1[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int choice;
    cout<<"stack operarations with choices \n 1 for push \n 2 for pop \n 3 for peek \n 4 for display: \n 0 for exit \n 5 for free memory: \n";
    do{
       cout<<"enter your choice::\n";
       cin>>choice;
       switch(choice)
       {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;

        case 5:
        stack_free();
        break;

        case 0:
        exit(0);
        default:cout<<"invalid choice\n";
     }
   }
   while(choice!=0);
   return 0;

}
