#include<stdio.h>
#ifndef NUM
#define NUM 100
#endif

void printarr(int * , int );
void fillarr (int * , int );
int isPrime (int);
void processarr (int * ,int );
	
int main()

{
 	int arr[NUM] = {0}; //partial initialization
	printarr(arr,NUM);
	printf("enter the frist value: ");
	scanf("%d",&arr[0]);
	fillarr(arr ,  NUM);
	printarr(arr , NUM);
    processarr(arr ,NUM);
    printarr(arr , NUM);

}
	void fillarr(int *arr, int size){
	int cnf;
	for(cnf=1 ;cnf < size ; ++cnf)
		arr[cnf] = arr[0] + cnf;
}
	      void printarr(int *arr, int size){
        	int cnf;
        	for(cnf=0 ;cnf < size ; ++cnf)
                printf("%d ",arr[cnf]);
		printf("\n");
}
	 int isPrime (int num){
		if(num == 1 || num == 0){
		return 0;
        }
	for (int i = 2 ; i<=num/2 ; i++){
        if (num % i == 0) {
            return 0;
    }
}
     }
 void processarr (int *arr ,int size )
{
                int num;
                for(num=0 ;num < size ; num++)
                {
                    if (isPrime(arr[num])==0)
                    {
                    arr[num]=0;
                    }
//                 printf("\n");

                }
}

     
     


