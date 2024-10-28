#include<iostream>
using namespace std;

int n=100;

int Stack[100],top=-1;

int Queue[100],start=-1,rear=-1;

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


void insertion(int value)
    {
        if(rear==n-1){
            cout<<"Queue is overflow"<<endl;
        }
        else if(start ==-1 && rear ==-1){
            start =0;
            rear =0;
           Queue[rear]=value;
            }
        else{
        rear++;
        Queue[rear]=value;
        }
    }
void Delete()
    {
        if (start == - 1 || start> rear)
        {
           cout<<"Queue Underflow "<<endl;
        }
    else
        {
          cout<<"Element deleted from queue is : "<< Queue[front] <<endl;
          start++;
       }
    }
void Display()
     {
        if (start == - 1||start>rear)
        {
           cout<<"Queue is empty"<<endl;
        }
        else
        {
          cout<<"Queue elements are : ";
          for (int i = start; i <= rear; i++)
          cout<< Queue[i] <<" "<<endl;
       }
    }
    void Q_free()
    {
    	for(int i=start; i<=rear ; i++)
    	{
    		free(Queue);
    	}
    }


int main()
{
    cout<<"Enter s for stack operation and q for queue operation "<<endl;
    char a;
    cin>>a;
    if(a=='s')
    {
        int ch,value;
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
    else if(a=='q')
    {
        int ch,value;
        cout<<"1.insert value"<<endl;
        cout<<"2.delete value"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.free"<<endl;
        cout<<"5.Exit"<<endl;
        do
        {
            cout<<"enter your choice"<<endl;
            cin>>ch;
            switch(ch)
            {
            case 1:
                {
                cout<<"enter value to be inserted in queue"<<endl;
                   cin>>value;
                   insertion(value);
                   break;
                }
             case 2:
                {
                   Delete();
                   break;
                }
                case 3:
                {
                Display();
                break;
                }
                case 4:
                    {
                     Q_free();
                     break;
                     }
                case 5:
                    {
                      cout<<"Exit the queue"<<endl;
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
}
