#include<stdio.h>

struct Emploopy {
    int id ;
    char name [25] ;
    double salary ;
    struct Emploopy *ptr;
}
    Node* first = NULL ;
     
    Node* creatNode(){
        Node *ptr = malloc(sizeof(struct Emploopy));
        if(pt != NULL){
            printf("Enter id , Enter Name , Enter Salary");
            scanf("%d, %[^],%lf", &ptr->id, ptr->name,&ptr->salary);
            ptr-> ptr = NULL;
                
    
