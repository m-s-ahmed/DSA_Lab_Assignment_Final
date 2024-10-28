#include <stdio.h>
int main()
{
    int n1,n2,n3,i=0,j=0,k=0,m=0,temp;
    int a[10000], b[10000], c[20000];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)
       scanf("%d", &b[i]);
    for(m=0;m<n1;m++)
    {
        for(i=0;i<n1-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }

    for(m=0;m<n1;m++)
    {
        for(i=0;i<n1-1;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }

    n3 = n1 + n2;
    i=0;
    j=0;
    k=0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
           c[k] = a[i];
           i++;
           k++;
        }

        else
        {
             c[k] = b[j];
             k++;
             j++;
        }

    }


    while (i < n1)
        c[k++] = a[i++];
    while (j < n2)
        c[k++] = b[j++];

    printf("Final array after merging: ");
    for(int k = 0; k < n3 ; k++)
        printf(" %d ",c[k]);
    return 0;
}
