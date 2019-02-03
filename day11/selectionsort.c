#include<stdio.h>
void selection_sort(int a[],int n)
{
 int pos,i,small,j;
 for(i=0;i<n-1;i++)
 {
 small=a[i];
 pos=i;
 for(j=i+1;j<n;j++)
 {
        if(a[j]<small)
        {
         small=a[j];
         pos=j;
        }
 }
 if(pos!=i)
  {
  a[pos]=a[i];
  a[i]=small;
  }
 }
}
int main()
{
 int a[50],i,n;
 printf("\nEnter the array size : ");
 scanf("%d",&n);
 printf("\nEnter the array elements : ");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 selection_sort(a,n);
 printf("\nThe array after sorting :\n");
 for(int i=0;i<n;i++)
	printf("%d\t",a[i]);
 printf("\n");
 return 0;
 }
