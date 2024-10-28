#include<bits/stdc++.h>
#include<iostream>

#define Max 1000

using namespace std;


//Sum Function

int sum(int ara[],int size)
{
    int summ;
    summ=0;
    for(int i=0;i<size;i++)
    {
        summ=summ+ara[i];
    }
    return summ;
}

//Min Function

int minimum(int ara[],int size)
{

    int Min=ara[0];
    for(int i=1;i<size;i++)
    {
        if(Min>ara[i])
        {
            Min=ara[i];
        }
    }
    return Min;
}

//Maximum Function

int maximum(int ara[],int size)
{

    int Maxx=ara[0];
    for(int i=1;i<size;i++)
    {
        if(Maxx<ara[i])
        {
            Maxx=ara[i];
        }
    }
    return Maxx;
}

//Driver Code

int main()
{
    int ara[Max];

    cout<<" Enter the array size "<<endl;
    int n;
    cin>>n;

    cout<<" Enter the array element "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    //Calling sum function

    int result=sum(ara,n);
    float avg=(float)result/n;  //type cast

    // Calling min function
    int minimum_value=minimum(ara,n);

    //Calling max function
    int maximum_value=maximum(ara,n);

    cout<< "The sum of the array is " << result << endl;
    cout<< "The minimum value  of the array is " << minimum_value << endl;
    cout<< "The maximum value of the array is " << maximum_value << endl;
    cout<< "The average value  of the array is " << avg << endl;

    return 0;


}
