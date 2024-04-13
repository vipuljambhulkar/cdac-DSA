#include<iostream>
using namespace std;

#ifndef SIZE
#define SIZE 10
#endif
class Arry{
    int arr[SIZE];
    int size;
public:
    void initializeArr();
    void fillArray(int first);
    void printArray();
};

void Arry::initializeArr(){
     int arr [20] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter size: (less than "<<SIZE<<"): ";
    cin>>size;
    if (size > SIZE)
        size = SIZE;
}

void Arry::fillArray(int first){
    for (auto i=0 ; i<size; i++)
        arr[i] = i + first;
}
void Arry::printArray(){
    cout<<"arr: ";
    for (auto i=0 ; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    Arry obj;
    obj.initializeArr();
    obj.fillArray(101);
    obj.printArray();
}

