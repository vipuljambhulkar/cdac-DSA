#include<iostream>
using namespace std;

class MyException{
    int num;
    string mesg;
public:
    MyException(int erroNo, const char *msg):num(erroNo),mesg(msg){
        
    }
    void what(){
        cout<<"num: "<<num<<"\t Type : "<<mesg<<endl;
    }
    ~MyException(){
        cout<<"Destruction called..."<<endl;
        
    }
};
int main(){
    try{
        cout<<"Statement #1"<<endl;
        throw MyException(440 , "Resourse Not Availiable");
        cout<<"Statement #2"<<endl;
    }
    catch(MyException &eptr)
    {
        eptr.what();
       // delete eptr;
    }
    cout<<"Statement #3"<<endl;
    return 0;
}
