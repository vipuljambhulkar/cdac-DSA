#include<iostream>
using namespace std;

class FriendA{
    int data1,data2;
    void fun(){cout<<"void fun()"<<endl;}
    void fun(int x){cout<<"void fun("<<x<<")"<<endl; }
    void fun(int x , int y){cout<<"void fun("<<x<<","<<y<<")"<<endl;}
    
    f
class FriendA{
    int data1,data2;
    void fun(){cout<<"void fun()"<<endl;}
    void fun(int x){cout<<"void fun("<<x<<")"<<endl; }
    void fun(int x , int y){cout<<"void fun("<<x<<","<<y<<")"<<endl;}
    
    friend class friendB;
};

class friendB{
    FriendA aobj;
public:
    friendB(int x=10 , int y=20){riend class friendB;
};

class friendB{
    FriendA aobj;
public:
    friendB(int x=10 , int y=20){
        aobj.data1 = x;
        aobj.data2 = y;
    }
    void callFuns(){
        aobj.fun();
        aobj.fun(10);
        aobj.fun(10,20);
    }
};

int main(){
    friendB Bobj(100,200);
    Bobj.callFuns();
}
        
    
