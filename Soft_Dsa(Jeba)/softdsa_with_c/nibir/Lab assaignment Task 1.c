#include<stdio.h>

int main()
{
    int i, ara[15];
    double sum=0;
    for(i=0;i<15;i++)
    {
        ara[i]=rand()%1000;
    }

    for(i=0;i<15;i++)
    {
        printf("The %d the value = %d.\n",i+1,ara[i]);
        sum=sum+ara[i];
    }
    printf("The sum of the element of the array = %0.2lf\n The average of the element of the array= %0.2lf.\n",sum,sum/15);
    int max=ara[0], min=ara[0];
    for (i=0;i<15;i++)
    {
        if(max<ara[i])
            max=ara[i];
        if(min>ara[i])
            min=ara[i];
    }
    printf("The maximum value of the array = %d.\nThe minimum value of the array is=%d.\n",max,min);
}

