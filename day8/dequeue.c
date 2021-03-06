#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left;
	struct node *right;
}*front=NULL,*rear=NULL;
void enqueue_rear(int d)
{
		struct node *newnode;
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data=d;
		newnode->left=NULL;
		newnode->right=NULL;
		if(front==NULL && rear==NULL)
		{
			front=newnode;
			rear=front;
		}
		else
		{
			rear->right=newnode;
			newnode->left=rear;
			rear=newnode;
		}	
}
void enqueue_front(int d)
{
		struct node *newnode;
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->data=d;
		newnode->left=NULL;
		newnode->right=NULL;
		if(front==NULL && rear==NULL)
		{
			front=newnode;
			rear=front;
		}
		else
		{
			front->left=newnode;
			newnode->right=front;
			rear=newnode;
		}	
}
int dequeue_front()
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
		{
			front = front->right;
			front->left=NULL;
		}	
		x=temp->data;
		free(temp);			
		return x;
}
int dequeue_rear()
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
		{
			rear = rear->left;
			rear->right=NULL;
		}	
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
			temp=temp->right;
		}
}
int main()d
{
	int ch;
	int data;
	do
	{
		printf("\n1: Enqueue from front");
		printf("\n2: Enqueue from rear");
		printf("\n3: Dequeue from front");
		printf("\n4: Dequeue from rear");		
		printf("\n5: Display");
		printf("\n6: quit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the data: ");
				scanf("%d",&data);
				enqueue_front(data);
				break;
			case 2:
				printf("\nEnter the data: ");
				scanf("%d",&data);
				enqueue_rear(data);
				break;	
			case 3:
				printf("\n%d has been dequeued",dequeue_front());
				break;
			case 4:
				printf("\n%d has been dequeued",dequeue_rear());
				break;	
			case 5:
				display();
				break;
			case 6:
				break;
			default:
				printf("\nWrong input!!");	
		}	
	}while(ch!=6);
		return 0;
}																	
