#include<stdio.h>
#define max 10
int queue_array[max];
int rear=-1;
int front=-1;
void insert(int x)
{
	if(front == -1)
	front++;
   
}
void delete()
{
     if(front == -1 || front > rear)
     {
     		printf("queue Underflow \n");
     		return ;
     }
     else 
     {
       	printf("elements deleted from queue : %d\n", queue_array[front]);
       	front=front+1;
     }
}
