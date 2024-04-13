#include<unistd.h>
#include<stdio.h>

int main(){
   int ret = fork();
   if(ret == 0){
       printf("control in child...\n");
   }else if (ret > 0){
       printf("control in parent...\n");
   }
   printf("Both parent an child has control\n");
   return 0;
   
}
 
