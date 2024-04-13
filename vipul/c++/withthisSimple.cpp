 #include<iostream>
using namespace std;

class simple{
    int data;
public:
   void getdata(int d=10 ){
    this->data = d;
    }
  
void printdetels(){
    cout<<"Data: "<<data<<endl;
}
};
int main(){
    simple obj;
    obj.getdata();
    obj.printdetels();//
}
