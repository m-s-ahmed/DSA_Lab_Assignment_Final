#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 1000
int *stack;
int top=-1;
void printarray(int arr[],int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d  ",arr[i]);
	}
}
void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void push(int value)
{
	if(top==MAX_STACK_SIZE-1)
	{
		printf(" the stack is overflow!");
	}
	else{
		top++;
		stack[top]=value;
	}
}
int pop()
	{
		if(top==-1)
		{
			printf(" the stack is underflow!");
			return -1;
		}
		else
		{
           return stack[top--];
		}
	}
	int partition(int arr[],int low,int high)
	{
		int i=low-1;
		int pivot=arr[high];
		for(int j=low; j<high; j++)
		{
			if(arr[j]<=pivot)
			{
				i++;
				swap(arr,i,j);
			}
		}
		swap(arr,i+1,high);
		return i+1;
	}
	void quicksort(int arr[],int low,int high)
	{
		stack=(int *)malloc(sizeof(int)*MAX_STACK_SIZE);
		top=-1;
		push(low);
		push(high);
		while(top!=-1)
		{
			high=pop();
			low=pop();
			int pivotIndex=partition(arr,low,high);
			if(pivotIndex-1>low)
			{
				push(low);
				push(pivotIndex-1);
			}
			if(pivotIndex+1<high)
			{
				push(pivotIndex+1);
				push(high);
			}
		}
		free(stack);
	}

int main()
{
	int size;
	printf("Enter the array size: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nInput array:  ");
	printarray(arr,size);
	quicksort(arr,0,size-1);
	printf("\n\nSorted array:  ");
	printarray(arr,size);
	return 0;
}

