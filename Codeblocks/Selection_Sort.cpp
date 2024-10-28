#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define Max 1000

int main()
{
    int ara[Max];
    int n;

    cout<< " Enter the array size "<<endl;

    cin>>n;

    cout<<"Enter the array elements " <<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    //For selection sort

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ara[j]<ara[i])
            {
                int temp=ara[j];
                ara[j]=ara[i];
                ara[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<ara[i] << " "<< endl;
    }



    return 0;
}
