//Remember we are taking two sorted array and then merge those arrays and sort them simultaneously .

#include<bits/stdc++.h>
#include<iostream>
#define Max 1000
using namespace std;

int main(void)
{
    int n1,n2,n3;
    int a[Max], b[Max], c[Max];


    cout<<"Enter the size of first array:"<<endl;
    cin>>n1;

    cout<<"Enter the array element: "<<endl;
    for( int i=0;i<n1;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the size of second array:"<<endl;
    cin>>n2;

    cout<<"Enter the array element: "<<endl;
    for( int i=0;i<n2;i++)
    {
        cin>>b[i];
    }


    n3=n1+n2;

     int i=0,j=0,k=0;

    //This loop will run till a or b is completely traversed
    while(i<n1 && j<n2)
    {
        //Taking the smallest one
        if(a[i]<b[j])
        {
            c[k++]=a[i++];  /* Here , as soon as we copy an element in c
                                array.Then we increment the iterator so that the  next element is coppied at next index in c array.*/

                            //when we copy an element form a to c , we increment i also because now we will compare with the next element of a.
        }
        else
        {
            c[k++]=b[j++];
        }
    }

    // copying the leftover element ,if any

    while(i<n1)
    {
        c[k++]=a[i++];
    }

    // copying the leftover element , if any

    while(j<n2)
    {
        c[k++]=b[j++];
    }

    cout<<"Final array after merging: "<<endl;

    //print the sorted arrays
    for(int i=0;i<n3;i++)
    {
        cout<<c[i]<<" "<<endl;

    }
    return 0;




}
