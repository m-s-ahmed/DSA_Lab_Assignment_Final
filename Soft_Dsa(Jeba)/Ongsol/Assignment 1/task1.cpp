//basics array operation 1&2
//Task 1
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void initialize_function()
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
	for( i=0; i<n; i++)
     	{
		cout<< arr[i] << "    " ;
	   }
	cout<< endl;
	for(i=0; i<n; i++)
		{
	     sum=sum + arr[i];
		}
	 cout << "average= " << (float)sum/n;
	 int min=arr[0];
	 int max=arr[0];
	 for(i=0; i<n; i++)
	 {
	 		 if(min > arr[i])
	 		 min=arr[i];
	 }
	 cout<< "\n\nMinimum= "<<min;
	 	 for(i=0; i<n; i++)
	 {
	 		 if(max<arr[i])
	 		 max=arr[i];
	 }
	 cout<< "\n\nMaximum= "<<max;
}

int main()
{
	initialize_function();
	getch();
}
