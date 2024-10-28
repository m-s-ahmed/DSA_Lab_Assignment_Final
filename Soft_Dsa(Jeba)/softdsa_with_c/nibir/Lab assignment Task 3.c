#include<stdio.h>

int main()
{
    int ara[20],i;

    for(i=0;i<20;i++)
    {
        ara[i]=rand()%500;
    }

    printf("Enter the value= ");
    int a;
    scanf("%d",&a);

    int j=0,temp;

    while(j<=20)
    {
        for(i=0;i>19;i++)
        {
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }
        j++;
    }

    printf("\n\nThe shorted array: \n");

    for(i=0;i<20;i++)
    {
        printf(" %d ",ara[i]);
    }

    int low=0,high=19,mid;

    while(high>=low)
    {
        mid=(low+high)/2;

            if(a==ara[mid])
            {
                printf("\n\n%d found.",a);
                break;
            }
            else if(a>ara[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
    }
    if(low>high)
    {
        printf("\n\n%d not found.",a);
    }
}
