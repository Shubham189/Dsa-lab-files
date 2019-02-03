#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int d)
{
		struct node *newnode;
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data=d;
		newnode->next=NULL;
		if(front==NULL && rear==NULL)
		{
			front=newnode;
			rear=front;
		}
		else
		{
			rear->next=newnode;
			rear=newnode;
		}	
}
int dequeue()
{
		int x;
		struct node *temp;
		temp=front;
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else
		{	
			front = front->next;
		}
		x=temp->data;
		free(temp);			
		return x;
}
int main()
{
		int x,temp;
		printf("\nEnter your number: ");
		scanf("%d",&x);
		int t=x;
		while(t!=0)
		{
			temp=t%10;
			enqueue(temp);
			t/=10;
		}
		while(1)
		{
			t=dequeue();
			if(front==NULL)
			{	
				printf("\n%d",t);
				exit(0);
			}
			t= t*10 + front->data;	
			front->data=t;
		}
		return 0;
}
			
