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
		if(front==NULL)
		{
			printf("\nEmpty queue!!\n");
			return  -1;
		}
		int x;
		struct node *temp;
		temp=front;
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else	
			front = front->next;
		x=temp->data;
		free(temp);			
		return x;
}
void display()
{
	printf("\n");
		struct node *temp;
		temp=front;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
}
int main()
{
	int ch;
	int data;
	do
	{
		printf("\n1: Enqueue");
		printf("\n2: Dequeue");
		printf("\n3: Display");
		printf("\n4: quit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the data: ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				printf("\n%d has been dequeued",dequeue());
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("\nWrong input!!");	
		}	
	}while(ch!=4);
		return 0;
}																	
