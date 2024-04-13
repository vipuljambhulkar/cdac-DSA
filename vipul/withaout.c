#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee{
    int id;
    struct Employee *ptr;
};
 
typedef struct Employee Node;
 
Node* createNode (int);
void addAtBeg(Node** , int);
void addAtEnd(Node** , int);
void addAtpos(Node** , int,int);
void deleteAtpos(Node** , int);
void disp(Node*);

int main(){
    Node *first = NULL;
    addAtBeg(&first , 1001);
    addAtEnd(&first , 1002);
    addAtEnd(&first , 1003);
    disp(first);
    addAtpos(&first, 1001 , 2);
    addAtpos(&first, 1005 , 3);
    addAtpos(&first, 1010 , 5);
    disp(first);
    deleteAtpos(&first,4);
    disp(first);
}
void deleteAtpos (Node**first, int pos)
{
    if(*first == NULL){
        printf("List is empty ... nothing to do\n");
        return;
    }
    Node *temp = *first;
    if(pos == 1){
        *first = (*first)->ptr;
    }else{
        int cnt = 1;
        Node *prev = NULL;
        while(temp!=NULL && cnt < pos){
            prev = temp;
            temp = temp->ptr;
            cnt++;
        }
        if (temp == NULL){
            printf("%d : No such position \n",pos);
            return;
        }
        prev->ptr = temp->ptr;
    }
    free(temp);
}
void addAtpos(Node**first, int data, int pos){
    Node *New = createNode(data);
    if (*first == NULL)
        *first == New;
    else{
        int cnt = 1;
        Node *temp = *first;
        while (temp->ptr != NULL && cnt < pos-1){
            temp = temp->ptr;
            cnt ++;
        }
        New->ptr = temp->ptr;
        temp->ptr = New;
    }
}
void addAtEnd(Node**first, int data){
    Node *New = createNode(data);
    if(*first == NULL)
        *first = New;
    else{
        Node *temp = *first;
        while(temp->ptr != NULL)
            temp = temp->ptr;
        temp->ptr = New;
    }
}
void addAtBeg(Node**first , int data){
     Node *New = createNode(data);
     if(*first == NULL)
         *first = New;
     else{
         New->ptr = *first;
         *first = New;
     }
}
   void disp(Node *temp){
       while(temp != NULL){
           printf("Id: %d\n",temp->id);
           temp = temp->ptr;
       }
       printf("--------------------------------------------------");
   }
   
   Node* createNode(int data){
    Node *ptr = malloc(sizeof(struct Employee));
    if (ptr != NULL){
        ptr-> id = data;
        ptr-> ptr =NULL;
    }
    return ptr;
} 
