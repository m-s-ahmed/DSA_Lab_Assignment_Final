#include<bits/stdc++.h>
#include<iostream>


using namespace std;

void swapp(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int row,col;

    cout<<"Enter the value of row and column"<<endl;
    cin>>row>>col;

    int ara[row][col];

    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Insert element at position ["<<i<<"]["<<j<<"]: ";
            cin>>ara[i][j];
        }
    }

    //Sorting

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<col-j-1;k++)
            {
                if(ara[i][k]>ara[i][k+1])
                {
                        swapp(&ara[i][k], &ara[i][k+1]);
                }
            }
        }
    }

    cout<<"Row Sorted is"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

