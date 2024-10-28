// Marge two sorted array elements((1D array)
#include<bits/stdc++.h>
using namespace std;
void marge_fucntion(int a[],int m,int b[],int n,int c[])
{
	int k=0,i=0,j=0;
	while(i<m && j<n)
		{
			if(a[i]<b[j])
				{
					c[k]=a[i];
						i++;
						k++;
				}
	        else
             	{
		              c[k]=b[j];
		               j++;
					   k++;
             	}

		}
		while(i<m)
		{
			c[k]=a[i];
			k++;
			i++;
		}
		while(j<n)
		{
			c[k]=b[j];
			k++;
			j++;
		}

	cout<< "The merge array is: "<<endl;
		for(int i=0; i<(m+n);i++)
		{
			cout<<c[i]<< " ";
		}

	return ;
}
int main()
{
	int m;
	cout<< "Enter 1st array size: ";
	cin>> m;
	int a[m];
	cout<< "\nEnter 1st sorted array element: "<<endl;
	for(int i=0; i<m;i++)
	{
		cin>>a[i];
	}
	int n;
	cout<< "Enter 2nd array size: ";
	cin>> n;
	int b[n];
	cout<< "\nEnter 2nd sorted array element: "<<endl;
	for(int i=0; i<n;i++)
	{
		cin>>b[i];
	}
	int c[m+n];
     marge_fucntion(a,m,b,n,c);
return 0;
}
