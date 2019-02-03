#include<stdio.h>
#include<stdlib.h>
struct tnode 
{
	struct tnode *left;
	int data;
	struct tnode *right;
}*root;
int flag=0;
struct tnode* insert(struct tnode *node,int key)
{

	if(node==NULL)
	{
		struct tnode *newnode;
		newnode=(struct tnode *)malloc(sizeof(struct tnode));
		newnode->left=newnode->right=NULL;
		newnode->data=key;
		node=newnode;
		if(flag==0)
		{
			root=node;
			flag=1;
		}
		return node;	
		
	}
	else
	{
		if(key<node->data)
			insert(node->left,key);
		else
			insert(node->right,key);
	}
}

struct tnode * find(struct tnode *node,int key)
{
	if(node==NULL)
		return NULL;
	if(key>node->data)
		return find(node->right,key);
	else if(key<node->data)
		return find(node->left,key);
	else 	
		return node;	
}

struct tnode * delete(struct tnode *node,int key)
{
	struct tnode *temp;
	if(node==NULL)
		printf("\nEmpty tree");
	else if(key<node->data)
		node->left=delete(node->left,key);
	else if(key>node->data)
		node->right=delete(node->right,key);
	else
	{
		if(node->right && node->left)
		{
			temp=find(node->right,key);
			node->data =temp->data;
			node->right	=delete(node->right,key);
		}
		else
		{
			temp=node;
			if(node->left==NULL)
				node = node->right;
			else if(node->right==NULL)
				node = node->left;
			free(temp);
		}
	}
	return node;
}


void display(struct tnode *tree)
{
	if(tree==NULL)
		return;
	printf(" %d",tree->data);
	display(tree->left);
	display(tree->right);
}

int main()
{
	int ch;
	int data;
	do
	{
		printf("\n1: Insert");
		printf("\n2: Delete");
		printf("\n3: Display");
		printf("\n4: quit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the data: ");
				scanf("%d",&data);
				root=insert(root,data);
				break;
			case 2:
				printf("\nEnter the data to be deleted: ");
				scanf("%d",&data);
				struct tnode *temp;
				temp=delete(root,data);
				printf("\n%d has been deleted",temp->data);
				break;
			case 3:
				display(root);
				break;
			case 4:
				break;
			default:
				printf("\nWrong input!!");	
		}	
	}while(ch!=4);
		return 0;
}																																
	
