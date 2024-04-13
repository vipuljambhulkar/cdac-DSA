#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct Employeee {
     int id ;
     char name[30];
     double salary ;
     struct Employeee *ptr ;
 };
 
 typedef struct Employeee Node ;
 Node* first = NULL ;
  
 Node* creatnode(){
     Node *ptr = malloc(sizeof(struct Employeee));
//      printf("Enter id :\n Enter name :\n Enter salary :");
//      scanf("%d,%s,%lf",&ptr->id , ptr->name , &ptr->salary);
     ptr->ptr = NULL;
     //printf("ID :%d\n ",ptr->id);
     return ptr;
 }
 
 addnode(){
     Node* New = createNode();
     if(first == NULL){
         first = New ;
     }
     else
     {
         New->ptr = first;
         first = New;
     }
}
