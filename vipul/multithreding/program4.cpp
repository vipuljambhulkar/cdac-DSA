#include<iostream>
#include<chrono>
#include<vector>
#include<thread>
using namespace std;

#ifndef NUM
#define NUM 5
#endif

class dosomeJob{//functor
public:
    void operator()(){
    cout<<"Job started......"<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout<<"Job completed...."<<endl;
    cout<<"============================================"<<endl;
}
};
int main(){
    vector<thread> arr(NUM);//c++ style STL container
//     for(int i = 0 ; i  < NUM ; i++){
//         arr.push_back(thread{dosomeJob});
//     }
    for(auto &i:arr)//modern c++ range based loop
    {
        i=thread{dosomeJob()};
    }
    for(auto &i:arr)//modern c++ range based loop
    {
        i.join();
    }
} 
 
