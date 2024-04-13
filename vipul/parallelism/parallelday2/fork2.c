#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
   int ret = fork();
   if(ret == 0){
       printf("control in child...\n");
       _exit(0);
       
   }else if (ret > 0){
       printf("control in parent...\n");
       _exit(0);
   } 
   _exit(0);
   printf("Both parent an child has control\n");
   _exit(0);
   return 0;
   
}
 
 
