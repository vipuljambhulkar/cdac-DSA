#include<iostream>
using namespace std;
class SimplaeA{
    int  dataA;
    void getData(int x =14){
    dataA = x;
}
void printDetails(){
    cout<<"A Data: "<<dataA<<endl;
}
    
};

class SimpleB{
    int dataB;
    void getdataB(float y=11.00){
    dataB = y;
    }
    void printDetailsB(){
        cout<<"B data: "<<dataB<<endl;
    }
};
