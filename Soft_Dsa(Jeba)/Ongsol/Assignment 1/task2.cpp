//Array sorting algorithms
//Task 2
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void selection_sort(int arr[], int n)
{
		int i,j,temp,min;
		for(i=0; i<n-1; i++)
	{
		min=i;
		{
			for(j=i+1; j<n; j++ )
			{
				if(arr[j]<arr[min])
				{
					min=j;

				}
			}
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}
void bubble_sort(int arr[],int n)
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
void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1; i<n; i++)
	{
		temp=arr[i];
		j=i-1;
		while( j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
int main()
{
	int n;
	cout<< " Enter input numbers: ";
	cin>> n;
	int arr[n],i;
    cout << "\nThe numbers are: ";
	for(i=0; i<n; i++)
	{
		cin>> arr[i];
	}
	cout << "1. Selection sort:"<<endl;
	cout << "2. Bubble sort:"<<endl;
	cout << "3. Insertion sort:"<<endl;
	cout<< "Enter a digit: ";
	int digit;
	cin>>digit;
	switch(digit)
	{

	case 1:
			selection_sort(arr,n);
			break;
	case 2:
		    bubble_sort(arr,n);
            break;
	case 3:
		     insertion_sort(arr,n);
            break;
	}

	for(i=0; i<n; i++)
	{
		cout<< arr[i] << "    ";
    }
	getch();
}
