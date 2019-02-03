#include<stdio.h>
#include<stdlib.h>
int lsearch(int s,int *p,int n)
{
	int i=0;
	while(s!=*(p+i)&&i<n)
	{
		i++;
	}
	if(i==n)
		return -1;
	else 
		return i+1;
}
void main()
{
	int sz,no,i=0,k=0;
	printf("\nnter the size of the array : ");
	scanf("%d",&sz);
	int *A=(int*) malloc(sz*sizeof(int));
	printf("\nEnter the elements in array : ");
	for(;i<sz;i++)
		scanf("%d",(A+i));
	printf("\nEnter the element to search : ");
	scanf("%d",&no);
	k=lsearch(no,A,sz);

	if(k!=-1)
		printf("\nThe element found at %d\n",k);
	else
		printf("\nThe element not found\n");
}
