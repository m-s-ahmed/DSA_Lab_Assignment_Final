#include<iostream>
using namespace std;
int n=100;
char Stack[100];
int top=-1;
void push(int value)
     {
         if(top==n-1)
         {
             cout<<"Stack is overflow"<<endl;
         }
         else{
           top++;
           Stack[top]=value;
         }
     }
 void pop()
     {
         if(top==-1)
         {
             cout<<"Stack is underflow"<<endl;
         }
         else{
             cout<<"The poped element is: "<<Stack[top]<<endl;
            top--;
         }
     }
void display()
     {
         if(top==-1)
         {
             cout<<"Stack is empty"<<endl;
         }
         else{
            cout<<"Stack elements are"<<endl;
            for(int i=top;i>=0;i--){
                cout<<Stack[i]<<" "<<endl;
            }
            cout << endl;
         }
     }
     void S_free()
     {
     	for(int i=top ; i>=0; i--)
     	{
     		free(Stack);
     	}
     }

int main()
{
        int ch;
        char value;
        cout<<"1.push in stack"<<endl;
        cout<<"2.pop from stack"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.free"<<endl;
        cout<<"5.exit"<<endl;
        do{
            cout<<"Enter choice"<<endl;
             cin>>ch;
             switch(ch)
             {
             case 1:
                {
                   cout<<"enter value to be pushed in stack"<<endl;
                   cin>>value;
                   push(value);
                   break;
                }
             case 2:
                {
                   pop();
                   break;
                }
                case 3:
                {
                display();
                break;
                }
                case 4:
                {
                S_free();
                break;
                }
                case 5:
                    {
                      cout<<"Exit the stack"<<endl;
                      break;
                    }
                default:
                    {
                        cout<<"Invalid Choice"<<endl;
                        break;
                    }
             }
        }
        while(ch!=5);
        return 0;
    }
