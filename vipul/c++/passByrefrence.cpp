#include<iostream>
using namespace std;

void change (int &);


void change(int &Xvar){
    Xvar= Xvar + 20;
}
 int main(){
     int var = 10;
     cout<<"Before var:"<<var<<endl;
     change(var);
     cout<<"Aftaer var :"<<var<<endl;
     return 0;
 }
 
