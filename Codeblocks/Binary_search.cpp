#include<bits/stdc++.h>
#include<iostream>
#define Max 1000
using namespace std;

int binarysearch(int ara[],int left,int right,int x)
{
    while(left<right)
    {
        int mid=left+((right-left)/2);
        //check if x is present at mid

        if(ara[mid]==x)
        {
            return mid;
        }
        //check if x is greater , ignore left
        if(ara[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}

//Driver code

int main()
{
    int ara[Max];
    int n;
    int x;
    cout<<"Enter the array size"<<endl;
    cin>>n;

    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    cout<<"Enter the value that you want to search"<<endl;
    cin>>x;

    int result=binarysearch(ara,0,n-1,x);

    (result==-1)?cout<<"Not Found"<<endl
                        :cout <<"Fond at index "<< result <<endl;

    return 0;

}
