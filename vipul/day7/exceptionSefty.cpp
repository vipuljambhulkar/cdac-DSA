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
};
int main(){
    try{
        cout<<"statement #1"<<endl;
        Test *ptr = new Test(100);
        throw 10;
        cout<<"statement #2"<<endl;
        delete ptr;
    }
    catch(int x){
        cout<<"caught "<<x<<endl;
    }
    cout<<"statement #3"<<endl;
}
