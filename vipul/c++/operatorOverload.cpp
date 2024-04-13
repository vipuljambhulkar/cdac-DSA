#include<iostream>
using namespace std;
class Operatorover{
    int data;
public:
    Operatorover(int x=0):data(x){}
        void print(){cout<<"data: "<<data<<endl;}
            Operatorover operator + (Operatorover &vip){
                Operatorover temp;
                temp.data = this->data + vip.data;
            }
        };
        
        int main(){
            Operatorover A = 100;
            Operatorover B = 50;
            Operatorover C = A + B;
            
            A.print();
            B.print();
            C.print();
        }
            
            
