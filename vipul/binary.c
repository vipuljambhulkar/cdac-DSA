#include<stdio.h>
#include<stdlib.h>
 
 typedef struct Test{
     int data ;
     struct Test* left , *right;
 }Node;
 
 Node *createNode(int);
 
 void insert(int);
 void disp();
 void preorder(Node *);
 void inorder(Node *);
 void postordr(Node *);
 
 Node *root = NULL;
 
 int main (){
     int arr[] = {40,20,60,10,30,50,70,5,15,25,35,45,55,65,75};
     for(int i = 0; i<15;i++)
         insert(arr[i]);
     disp();
 }
 
 void insert(int num){
     Node *prev = NULL, *temp = root;
     Node *New = createNode(num);
     while (temp != NULL){
         prev = temp;
         if(num < temp->data)
             temp = temp->left;
         else
             temp = temp->right;
     }
     if(prev==NULL)
         root = New ;
     else if (num < prev->data)
         prev->left = New;
     else
         prev->right = New;
 }
 
 Node *createNode(int num){
     Node *New = malloc(sizeof(Node));
     if (New != NULL){
         New->data =num;
         New->left = New->right = NULL;
     }
     return New;
 }
  
  void disp(){
  printf("pre-order: ");
  preorder(root);
  printf("\nIn-order:");
  inorder(root);
  printf("\nPost-order");
  postordr(root);
  printf("\n================================================================\n");
  }
  
  void preorder(Node *root){
      if(root != NULL){
          printf("%d ", root->data);
          preorder(root->left);
          preorder(root->right);
      }
  }
  void inorder(Node *root){
      if(root !=NULL){
          inorder(root->left);
          printf("%d ", root->data);
          inorder(root->right);
      }
  }
  void postordr(Node *root){
      if(root!=NULL){
          postordr(root->left);
          postordr(root->right);
          printf("%d ",root->data);
      }
  }
  
          
          
          
          
          
          
          
          
          
          
