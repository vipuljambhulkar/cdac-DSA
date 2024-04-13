#include<iostream>
using namespace std;

void fun();
void fun(int);
void fun(double);
// void fun(char *);
// void fun(string);
// void fun(float);
// void fun(char);
// void fun(int , int );
// void fun(double , double );
// void fun(int , double );
// void fun(double , int );
int main(){
    fun();
    fun(10);
    fun(12.003);
    return 0 ;

}
void fun(){
    cout<<"Void fun()"<<endl;
}

void fun(int a){
    cout<<"Void fun("<<a<<")"<<endl;
}
void fun(double){
    cout<<"Void fun(double)"<<endl;
}
