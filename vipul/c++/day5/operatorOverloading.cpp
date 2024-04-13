#include<iostream>
using namespace std;

class vipul{
    int data ;
public:
    vipul(int x=0):data(x) {}
    void print(ostream &out) {
        out<<"data : "<<data<<endl;
    }
    friend vipul& operator ++ (vipul&);
    friend vipul operator ++ (vipul& , int);
};

vipul& operator++(vipul &Akhi){//pre-fix
    Akhi.data += 1;
    return Akhi;
}
vipul operator++(vipul&Akhi , int){
    vipul temp(Akhi);
    Akhi.data += 1;
    return temp;
}
int main(){
    vipul a , b=10, c;
    a =++b;
    a.print(cout);
    b.print(cout);
    
    c=b++;
    c.print(cout);
    b.print(cout);
}

