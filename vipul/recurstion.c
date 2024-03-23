#include<stdio.h>
void recur(int);
int main(){
    recur(1);
    printf("\n");
}
void recur(int num){
    if(num <=5){
        printf("%d ",num);
        recur(num + 1);
        printf("%d ",num);
        
    }
}
//out put is  1 2 3 4 5 5 4 3 2 1 
