#include<bits/stdc++.h>
#include<iostream>
#define Max 1000
using namespace std;

int main()
{
    int ara[Max];
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;

    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    //Bubble Sort

    int counter=1;// iteration count korar jonno nilam, iteration lagbe n-1 porjonto where n is a number of element
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(ara[i]>ara[i+1])
            {
                int temp=ara[i+1];
                ara[i+1]=ara[i];
                ara[i]=temp;
            }
        }
        counter++;
    }

    cout<<"The sorted list is"<< endl;

    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" "<<endl;
    }
}
