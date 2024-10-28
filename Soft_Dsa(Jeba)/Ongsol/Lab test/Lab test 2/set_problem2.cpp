#include<iostream>
using namespace std;
int n=100;
char Queue[100];
int start=-1,rear=-1;
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
          cout<<"Element deleted from queue is : "<< Queue[start] <<endl;
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
	       int ch;
	       char value;
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
