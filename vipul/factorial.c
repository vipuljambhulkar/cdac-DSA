#include<stdio.h>
//void recur(int );
int recur(int num){
    if(num >=1)
    return num*recur(num-1);
    else
        return 1;
}
int main (){
    int num;
    printf("enter your number : ");
     scanf("%d",&num);
   
    printf("%d", recur(num));
    return 0;
}

