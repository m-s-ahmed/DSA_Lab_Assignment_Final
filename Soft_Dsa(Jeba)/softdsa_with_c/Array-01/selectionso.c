#include<stdio.h>
int main()
{
    int arr[100],i,j,n,numb;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;

    }
    printf("\n\n the series is:  ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
      int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        if(min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;

        }
    }
printf("\n\n the sorted seris is:  ");
for(i=0;i<n;i++)
{
    printf("%d   ",arr[i]);
}

}
