#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
    int id;
    struct Employee *ptr;
};
typedef struct Employee Node;

Node* creatNode(int);
void addAtBeg (Node** , int);
void addAtEND (Node** , int);
// void addAtpos (Node** ,int , int);
// void deleteAtpos (Node** , int);
// void disp(Node*);

Node* creatNode(int data){
    Node *ptr = malloc(sizeof(struct Employee));
    if (ptr != NULL){
        ptr-> id = data;
        ptr-> ptr =NULL;
    }
    return ptr;
} 

void addAtBeg(Node**first , int data){
    Node *New = creatNode(data);
    if (*first == NULL)
        *first = New;
    else{
        New->ptr = *first;
        *first = New;
    }
}
void addAtEND (Node**first , int data){
    Node *New = creatNode(data);
    if (*first == NULL)
        *first = New;
    else{
        Node *temp = *first;
        while(temp->ptr != NULL)
            temp = temp->ptr;
        temp->prt = New;
    }
}
void disp(Node *temp){
    while (temp != NULL){
        printf("Id: %d\n",temp->id);
        temp = temp->ptr;
    }
    printf("------------------------------------------------");
    }

int main(){
    Node *first = NULL;
    addAtBeg(&first , 1001);
    addAtEnd(&first , 1002);
    addAtEnd(&first , 1003);
       disp(first);
//     addAtpos(&first, 1001 , 2);
//     addAtpos(&first, 1005 , 3);
//     addAtpos(&first, 1010 , 5);
//     disp(first);
//     deleteAtpos(&first,4);
//     disp(first);
}
