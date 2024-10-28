#include<bits/stdc++.h>
#include<iostream>
#define Max 1000
using namespace std;

int main()
{
    int ara[Max];
    int n;
    cout<< "Enter the array size"<<endl;
    cin>>n;

    cout<<"Enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    //Insertion sort

    for(int i=0;i<n;i++)
    {
        int key=ara[i];
        int j=i-1;

        while(j>=0 && ara[j]>key)
        {
            ara[j+1]=ara[j];
            j--;
        }
        ara[j+1]=key;
    }

    cout<<"The sorted list is "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" "<<endl;
    }

    return 0;
}
