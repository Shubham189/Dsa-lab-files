#include<stdio.h>
#include<stdlib.h>
int b1search(int s,int *p,int n)
{int i=0,m=(i+n)/2;
while(i<=n)
{
if(s<*(p+m))
n=m-1;
else if(s==*(p+m))
return m;
else if(s>*(p+m))
i=m+1;
m=(i+n)/2;
}
if(i>n)
return -1;
}
void main()
{
int sz,no,i=0,k=0;
printf("\nEnter the size of the array :");
scanf("%d",&sz);
int *A=(int*) malloc(sz*sizeof(int));
printf("\nEnter the elements in array : ");
for(;i<sz;i++)
scanf("%d",(A+i));
printf("\nEnter the element which is to be searched : ");
scanf("%d",&no);
k=b1search(no,A,sz-1);

if(k!=-1)
printf("\nThe element found at %d\n",k+1);
else
printf("\nThe element not found\n");
}
