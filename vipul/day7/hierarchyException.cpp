#include<iostream>
#include<exception>
using namespace std;

class OurException{
public:
    virtual void what(){
        
    }
};

class YourException:public OurException{
    int num;
public:
    YourException(int erroNo):num(erroNo){
        
    }
    void what(){
        cout<<"num: "<<num<<endl;
    }
};

class MyException:public OurException{
    int num;
    string mesg;
public:
    MyException(int erroNo, const char *msg):num(erroNo){
        
    }
    void what(){
         cout<<"num: "<<num<<"\t Type : "<<mesg<<endl;
    }
};

int main(){
        try{
            cout<<"Statment #1"<<endl;
            throw OurException();
            cout<<"Statment #2"<<endl;
        }
        catch(OurException &eobj){
            eobj.what();
        }
        cout<<"Statment #3"<<endl;
    return 0;
}
