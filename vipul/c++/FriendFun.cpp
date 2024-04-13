 
#include<iostream>
using namespace std;

class simple{
    int data;
    void getdata(int x=10){
    data = x;
//     return *this;
    }
  
void printdetels(){
    cout<<"Data: "<<data<<endl;
}
friend int main();
};
int main(){
    simple obj;
    obj.getdata(100);
    obj.printdetels();//
}
