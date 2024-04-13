#include<iostream>
using namespace std;
//int gVar=100;//globle v
//void fun(); //globle function 

// int main(){
//     cout<<"Globle variabl..."<gVar<<endl;
//     fun();//globaly declared function
// }
//  void fun(){
//      cout<<"in fun()\n";
//  }

//===================================================================================

// int main(){
//     int gVar = 200;
//     cout<<"Globle variabl...""::gVar<<\tLocal"<<gVar<<endl;
//     fun();
// }
//  void fun(){
//      cout<<"in fun()\n";
//  }

namespace Mine {
    int gVar = 100;
    void fun();
}
namespace Your{
    int gVar = 130;
    void fun();
}
int main(){
    int gVar = 200;
    cout<<"Local:"<<gVar<<endl;
    cout<<"mine::gVar"<<Mine::gVar<<endl;
    cout<<"your::gVar"<<Your::gVar<<endl;
    Mine::fun();
    Your::fun();
}

 void Mine::fun(){
     cout<<"in mine::fun()\n";
 }
  void Your::fun(){
     cout<<"in Your:: fun()\n";
 }

