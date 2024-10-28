#include<stdio.h>
int main()
{
    int i,ara[15],n=0,m;

    for(i=0;i<15;i++)
        {
            ara[i]=rand()%1000;
        }
        printf("The values of the array:\n\n");
    for(i=0;i<15;i++)
    {
        printf("The %d th value = %d.\n",i+1,ara[i]);


    }
        while(n<14)
        {
            for(i=0;i<14;i++)
            {
                if(ara[i]>ara[i+1])
                {
                    m=ara[i+1];
                    ara[i+1]=ara[i];
                    ara[i]=m;
                }
            }
            n++;
        }
        printf("Bubble shorted Array:\n\n");
        for(i=0;i<15;i++)
        {
            printf("The %d th value= %d.\n",i+1,ara[i]);
        }
}
