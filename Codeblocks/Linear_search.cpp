#include<bits/stdc++.h>
#include<iostream>
#define Max 1000
using namespace std;

int search(int ara[], int size,int x)
{
    for(int i=0;i<size;i++)
    {
        if(ara[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int ara[Max];
    int n,m;
    cout<<"Enter the array size"<<endl;
    cin>>n;

    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    cout<<"Enter the element that you want to search"<<endl;
    cin>>m;

    int result=search(ara,n,m);

    (result==-1)? cout<<"Not Found"<<endl
                        : cout<<"Foud at index"<<result<<endl;

    return 0;

}
