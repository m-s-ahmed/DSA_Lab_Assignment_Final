#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{

    int row, column;
    int value;

    cout<<" Enter the number of Row "<<endl;
    cin>>row;

    cout<<"Enter the number of Column"<<endl;
    cin>>column;

    int ara[row][column];

    cout<<"Enter the array elements"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin>>ara[i][j];
        }
    }

    cout << "\nThe entered 2D array is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << ara[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Enter the elements that you want to search"<<endl;
    cin>>value;


    int flag=-1;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(ara[i][j]==value)
            {
                flag=1;
                cout<<"The find value at position ["<<i+1<<"]["<<j+1<<"]  " ;
                break;
            }
        }
    }

    if(flag==-1)
    {
        cout<<"value not found"<<endl;
    }
    return 0;

}
