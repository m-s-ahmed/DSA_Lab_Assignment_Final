#include<bits/stdc++.h>
using namespace std;
void bubble_sortforascending(int arr[],int n)
{
	int i,j,temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void bubble_sortfordescending(int arr[],int n)
{
	int i,j,temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void display(int arr[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout<< arr[i] << "    ";
    }
}

int main()
{
	int n;
	cin>> n;
	int arr[n],i,j,sum=0;
	srand(time(0));
	for(i=0; i<n; i++)
	    {
		//cin>> arr[i];
	    arr[i]=rand()%10;
	     }
	     display(arr,n);

	cout << "\nA.Ascending order:"<<endl;
	cout << "D.Descending order:"<<endl;
	cout<< "Enter a character A & D: ";
     char ch;
	cin>>ch;
	switch(ch)
	{

	case 'A':
		bubble_sortforascending(arr,n);
			break;
	case 'D':
		bubble_sortfordescending(arr,n);
            break;
	}
	display(arr,n);
}
