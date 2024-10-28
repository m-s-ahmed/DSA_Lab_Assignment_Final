//Merge two 2D array
#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	cout<< "Enter the number of row and column of a 1st and 2nd 2D array"<< endl;
	cin>> n>>m;
	int a[n][m],b[n][m],c[n][2*m];
	cout<<"Enter the element of 1st 2D array" <<endl;
	for( i=0; i<n;i++)
	{
		for( j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
		cout<< endl;
	}
	cout<<endl;

	cout<<"Enter the element of 2nd 2D array" <<endl;
	for( i=0; i<n;i++)
	{
		for( j=0; j<m; j++)
		{
			cin>>b[i][j];
		}
		cout<< endl;
	}
	cout<<endl;

		for( i=0; i<n;i++)
	{
		for( j=0; j<2*n; j++)
		{
			if(j<n)
			{
				c[i][j]=a[i][j];
			}
			else
			{
				c[i][j]=b[i][j-n];
			}
		}
	}
	cout<<"after merging"<<endl;
	for( i=0; i<n;i++)
	{
		for( j=0;j<2*n; j++)
		{
			cout<<c[i][j]<< "  ";
		}
		cout<<endl;
	}
}
