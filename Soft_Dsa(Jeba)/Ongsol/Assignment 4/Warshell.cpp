#include<iostream>
using namespace std ;
int main()
{
	int n;
	cout << "Enter the vartices"<< endl;
	cin>>n;
	int a[n][n], p[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j]==0)
				p[i][j]=0;
			else
				p[i][j]=1;
		}
	}
	for(int k=0; k<n; k++)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				p[i][j]=p[i][j] || (p[i][k]&&p[k][j]);
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<< p[i][j] << "  " ;
		}
		cout <<endl;
	}
	return 0;
}
