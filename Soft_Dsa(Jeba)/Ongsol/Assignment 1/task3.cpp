#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int i,int j,int temp,int n)
{
		for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i ; j++)
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
int binary_searchfunction(int arr[],int element,int n)
{
	int mid,low,high;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			cout<< "the element is found"<<endl;
			return mid;
		}
	    else if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}

	}
return -1;
}

int main()
{
	    // int len = sizeof(data)/sizeof(data[0]);
	int n,i,j,temp;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++)
	{
		cin>> arr[i];
	}
	bubble_sort(arr,i,j,temp,n);
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<< "  ";
	}
	cout<<endl;
    int element;
	cin>>element;
	int search_index=binary_searchfunction(arr,element,n);
	cout << "the index is: "<< search_index<<endl;
	cout << "the position is: "<< search_index+1<<endl;

	return 0;
}

