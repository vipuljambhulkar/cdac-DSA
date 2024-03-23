#include<stdio.h>
#ifndef NUM
#define NUM 10
#endif
#include<stdlib.h>
#include<time.h>

void printarr(int * , int );
void printarr(int * , int );
void fillarr (int * , int );
void bubblesort(int *, int );
void selectionsort(int *, int );
void insertionsort(int * ,int );
int main()

{
    srand(time(NULL));
    int arr[NUM];
    fillarr(arr , NUM);
    printarr(arr , NUM);
    bubblesort(arr , NUM);
    printarr(arr , NUM);
    selectionsort(arr , NUM);
    printarr(arr , NUM);
    insertionsort(arr , NUM);
    printarr(arr , NUM);

}
void bubblesort(int *arr , int size)
{   
    for(int i =0 ;i < size-1 ; i++)
    {
        for(int j = 0; j< size-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        
    }
}
    }
}
 void selectionsort(int *arr , int size)
 {
      int mid;
     for(int i= 0 ; i< size -1; i++){
            mid = i;
         for(int j= i+1 ;j< size ; j++){
             if (arr[j] < arr[mid]){
                 mid = j ;
                int temp = arr[i];
                 arr[j] = arr[mid];
                 arr[mid] = temp;
    }
         }
}
 }
 void insertionsort(int *arr , int size){
     int j;
     for(int i = 1;i<size ; i++){
         int key =arr[i];
         j = i - 1 ;
         while (j>=0 && arr[j] > key){
             arr[j+1] = arr[j];
             j--;
         }
         arr[j+1] = key ;
     
 }
 }
	void fillarr(int *arr, int size){
	int cnf;
	for(cnf=1 ;cnf < size ; ++cnf)
		arr[cnf] = rand() % (NUM * 10);
}
	      void printarr(int *arr, int size){
        	int cnf;
        	for(cnf=0 ;cnf < size ; ++cnf)
                printf("%d ",arr[cnf]);
		printf("\n");
}
