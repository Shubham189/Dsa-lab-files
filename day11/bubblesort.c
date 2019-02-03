#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap;
 
  printf("\nEnter number of elements : ");
  scanf("%d", &n);
 
  printf("\nEnter %d integers : ", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
printf("\nSorted array of ascending order: ");
for(c=0;c<n;c++)
{
	printf("%d ",array[c]);
}
printf("\n");
return 0;
}	 
