#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

#ifndef NUM
#define NUM 5
#endif

void dosomeJob(){
    cout<<"Job started......"<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout<<"Job completed...."<<endl;
    cout<<"............................................"<<endl;
}
int main(){
    thread arr[NUM];
    for(int i = 0 ; i  < NUM ; i++){
        arr[i] = thread(dosomeJob);
    }
    for(int i = 0 ; i  < NUM ; i++){
        arr[i].join();
    }
}
