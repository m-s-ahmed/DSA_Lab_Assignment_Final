//task6
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<< "Enter the number of row and column of a 2D array :" << endl;
	cin>>n>>m;
	int l,a[n][m];
	cout<< " Enter the element of a 2D array "<< endl;
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
		cout <<endl;
	}
	cout<< "Which row do you want to sort"<<endl;
	cin>> l;
	int temp,k=l-1;
	for(int i=0;i<n-1; i++)
	{
		for(int j=i+1;j<n; j++)
		{
			if (a[k][i]>a[k][j])
			{
				swap(a[k][i],a[k][j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << a[k][i]<< "   ";
	}
}


