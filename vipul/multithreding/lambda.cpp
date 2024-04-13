#include<iostream>
using namespace std;
int main(){
    auto fun[](int a, int b){
        cout<"Hello world........."<<endl;
        return a + b;
    };
    cout<<"calling fun...."<<fun(10,20)<<endl;
}
