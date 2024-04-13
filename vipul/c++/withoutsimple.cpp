#include<iostream>
using namespace std;

class simple{
    int data;
public:
    simple& getdata(int x=10){
    data =x;
    return *this;
    }
  
void printdetels(){
    cout<<"Data: "<<data<<endl;
}
};
int main(){
    simple obj;
    obj.getdata(100).printdetels();//
}
