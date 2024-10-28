//2D array,task5
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	 cout << "Enter the row and column of a 2D array: "<<endl;
	cin>>n>>m;
	int a[n][m];
	cout<< "Enter the element of a 2D array: "<<endl;
	for(int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin>> a[i][j];
		}
		cout<< endl;
	}
	int i,j,value,flag=-1;
	cout<< "Enter the searching value "<<endl;
	cin>> value;
	for( i=0; i<n; i++)
	{
		for ( j=0; j<m; j++)
		{
		if(a[i][j]==value)
		     {
			flag=0;
			break;
		      }
     	}
	if(flag==0)
		break;
}

			if(flag==-1)
				{
								cout<< " The data is not found "<<endl;
				}
			else
     			{
					cout<< "The index is "<< "("<<i+1<<","<<j+1<<")"<<endl;
     			}
     			return 0;
}
