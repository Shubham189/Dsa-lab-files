#include<stdio.h>
#define max 5
int queue_array[max];
int rear=-1;
int front=-1;
void insert()
{
   int add_item;
  if(rear==max-1)
   	printf("queue overflow \n");
  else
  {
  		 if(front == -1)
    	 		front=0;
   	 printf("insert the elements in the queue: ");
   	 scanf("%d", &add_item);
   	 rear= rear+1;
  	 	 queue_array[rear]= add_item;
  }
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
void display()
{
       int i;
       if(front == -1)
         	printf("queue is empty \n");
       else
       {
       	  printf("queue is: \n");
       	  for(i=front;i<=rear;i++)
       		    printf("%d ",queue_array[i]);
       	  printf("\n");
       }
}      
int main()
{
   int choice;
   do
   { 
   		printf("\n\n");
      	printf("1.interest element to queue \n");
     		printf("2.delete elements from queue \n");
     		printf("3.display all elents of queue \n");
    	  	printf("4.quit\n");
         printf("5.enter ur choice : ");
      	scanf("%d",&choice);
      	switch(choice)
   		{
      		case 1:
      			insert();
     				break;
     			case 2:
      			delete();
      			break;
      		case 3:
      			display();
      			break;
      		case 4:
      			break;
      		default:
      			printf("wrong choice \n");
       }
    }while(choice!=4);
    return 0;
}
   
             
        
      
     
