#include<iostream>
using namespace std;

class Test{
    int data;
public:
    Test (int x= 0):data (x){
        cout<<"Test("<<x<<")"<<endl;
    }
    ~Test(){
        cout<<"~Test()"<<endl;
    }
    void disp(){
        cout<<"Test::disp()"<<data<<endl;
    }
};
