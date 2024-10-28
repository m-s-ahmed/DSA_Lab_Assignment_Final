#include<stdio.h>
int main()
{
    int A[100],i,j,n;
    printf("How many element do you want in array A  :  \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        A[i]=rand()%100;
    }

    printf("\nThe array A  : \n");

    for(i=0;i<n;i++)
    {
        printf("%d   ",A[i]);
    }

    int B[100],m,temp;
    printf("\n\nHow many element do you want in array B :\n");
    scanf("%d",&m);
    for (i=0;i<m;i++)
    {
        B[i]=rand()%100;
    }
    printf("\nThe array B :\n");
    for(i=0;i<m;i++)
    {
        printf("%d   ",B[i]);
    }
    int x=m+n;
    int C[x];
    for(i=0;i<n;i++)
    {
        C[i]=A[i];
    }
    for(i=0;i<m;i++)
    {
        C[n+i]=B[i];
    }
    printf("\n\nMarging two array A and B :\n");
    for(i=0;i<x;i++)
    {
        printf("%d   ",C[i]);
    }


    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(C[j]<C[i])
            {
                temp=C[j];
                C[j]=C[i];
                C[i]=temp;
            }
        }
    }

    printf("\n\nThe marged and sorted array C  :\n");
    for(i=0;i<x;i++)
    {
        printf("%d   ",C[i]);
    }


    int l=0,h=x,mid,g;
    printf("\n\nWhat value do you want to search for  ?\n");
    scanf("%d",&g);
    while(l<=h)
    {
        mid=(l+h)/2;
        if(C[mid]==g)
        {
            break;
        }
        else if(C[mid]>g)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }


    if(C[mid]==g)
    {
        printf("\n\nThe  %d  value is found in  %d  position\n",g,mid+1);
    }
    else
    {
        printf("\n\nThe  %d  is NOT FOUND\n",g);
    }



    getch();
}
