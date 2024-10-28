#include <stdio.h>

int main()
{
  int array[1000], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  //printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
   {
        array[c]=rand()%1000;
   }
printf("The series is :  \n");
    for(c = 0; c < n; c++)
    {
        printf("%d   ",array[c]);
    }
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("\n\nSorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d   ", array[c]);\

     printf("\n\n");

  return 0;
}
