#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int row , column;
    //int         a[row][column],      b[row][column],     c[row][column+column];

    cout<<"Enter the number to row and columns of two matrices"<<endl;
    cin >>row>>column;

    int         a[row][column],      b[row][column] , c[row][column+column];

    cout<<"Enter the first matrices value"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Insert value at position ["<<i<<"] ["<<j<<"]: " ;
            cin>>a[i][j];
        }
    }

    cout<<"/n The inserted first matrices is"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //Second Matrices

    cout<<"Enter the second matrices value"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Insert value at position ["<<i<<"] ["<<j<<"]: " ;
            cin>>b[i][j];
        }
    }

    cout<<"/n The inserted second matrices is"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

//Merged Array
    int col=column+column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j<row)
            {
                c[i][j]=a[i][j];
            }
            else
            {
                c[i][j]=b[i][j-row];
            }
        }
    }

    cout<<"/n The merged matrices is "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

