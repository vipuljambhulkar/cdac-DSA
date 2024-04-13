#include<iostream>
using namespace std;

void creatNPrintArr(int);
int main(){
    creatNPrintArr(10);
    creatNPrintArr(20);
    creatNPrintArr(-10);
    creatNPrintArr(40);
    return 0;
}
void creatNPrintArr(int size){
    try{
        if(size < 0)
            throw size;
        int *arr = new int[size];
        for(int cnt=0;cnt<size;cnt++)
            arr[cnt] =100+cnt;
        cout<<"arr: ";
        for(int cnt=0;cnt<size;cnt++)
            cout<<arr[cnt]<<" ";
        cout<<endl;
        delete[] arr;
    }catch(int x){
        cout<<"Size cannot be " <<x<<endl;
    }
}
        
