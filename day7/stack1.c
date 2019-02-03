#include<stdio.h>
#include<stdlib.h>
int n;
void display(int st[])
{
	for(int i=st[0];i>=1;i--)
	printf("%d<--",st[i]);
}

void pop(int st[])
{
	if(st[0]==0)
		printf("Underflow !!\n");
	else
		printf("\n%d",st[st[0]--]);
}

void push(int st[])
{
	if(st[0]==9)
		printf("\nStack overflow!!\n");
	else
	{	
		printf("\nEnter the data  :");
		scanf("%d",&st[++st[0]]);	
	}
}

int main()
{
	int ch,stack[10];
	char c;
	printf("\nEnter the desired number of elements in the stack : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&stack[i]);
	stack[0]=n;	
	do
	{	
		printf("\nmenu");
		printf("\n1: Push");
		printf("\n2: Pop");
		printf("\n3: Displqay");
		printf("\n3: Quit.");
		printf("\nEnter the choice :");
		scanf("%d",&ch);
		if(ch==1)
		{
			push(stack);
			display(stack);
		}
		else if(ch==2)
		{
			pop(stack);
			printf("\n");
			display(stack);
		
		}
		else if(ch==3)
			display(stack);
		else if(ch==4)
			exit(0);
		else
			printf("\nWrong choice !!");	
		printf("\nDo you want to continue ? ");
		scanf(" %c",&c);	
	}while(c=='y');
	return 0;		
}
