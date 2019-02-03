#include<stdio.h>
#include<stdlib.h>
struct tree{
   int info;
   struct tree *left;
   struct tree *right;
};
struct tree *insert(struct tree *root,int x){
   if(!root){
      root = (struct tree*)malloc(sizeof(struct tree));
      root -> info=x;
      root -> left= NULL;
      root -> right = NULL;
      return(root);
   }
   if(root->info>x)
      root->left=insert(root->left,x);   
   else{
      if(root->info<x)
         root->right = insert(root->right,x);
   }
   return(root);
}
void inorder(struct tree *root){
   if(root!=NULL){
      inorder(root->left);
      printf(" %d",root->info);
      inorder(root->right);
   }
}
void postorder(struct tree *root){
   if(root!=NULL){
      postorder(root->left);
      postorder(root->right);
      printf(" %d",root->info);
   }
}
void preorder(struct tree *root){
   if(root!=NULL){
      printf(" %d",root->info);
      preorder(root->left);
      preorder(root->right);
   }
}
struct tree *delete(struct tree *ptr, int x){
   struct tree *p1,*p2;
   if(!ptr){
      printf("\nNode not found");
      return(ptr);
   }
   else{
      if(ptr->info<x){
         ptr->right=delete(ptr->right,x);
         return ptr;
      }
      else if(ptr->info>x){
         ptr->left=delete(ptr->left,x);
         return ptr;
      }
      else{
         if(ptr->info==x){
            if(ptr->left==ptr->right){
               free(ptr);
               return(NULL);
            }
            else if(ptr->left==NULL){
               p1=ptr->right;
               free(ptr);
               return p1;
            }
            else if(ptr->right==NULL){
               p1=ptr->left;
               free(ptr);
               return p1;
            }
            else{
               p1=ptr->right;
               p2=ptr->right;
               while(p1->left!=NULL)
                  p1=p1->left;
               p1->left=ptr->left;
               free(ptr);
               return p2;
            }
         }
      }
   }
   return (ptr);
}
void main(){
   struct tree *root;
   int c,item,ino;
   root=NULL;
   do{
      do{
         printf("\n1.Insert\n2.Delete\n3.Inorder\n4.Postorder\n5.Preorderd\nEnter Choice : ");
         scanf("%d",&c);
         if(c<1 || c>6)
            printf("Invalid Choice");
      }
      while(c<1||c>6);
      switch(c){
         case 1:  printf("\nEnter a new item : ");
            scanf("%d",&item);
            root = insert(root,item);
            break;
         case 2:  printf("\nEnter item to be deleted: ");
            scanf("%d",&ino);
            root = delete(root,ino);
            break;
         case 3:
            printf("\nInorder traversal : ");
            inorder(root);
            break;
         case 4:
            printf("\nPostorder traversal : ");
            postorder(root);
            break;
         case 5: 
            printf("\nPreorder traversal : ");
            preorder(root);
            break;
         default:printf("End of program");
         }
      }
      while(c!=6);
}
