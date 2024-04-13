#include<iostream>
using namespace std;
struct Employee{
    int id ;
    string name;
    double salary;
    
    void printDetails();
    void acceptDetails();
};
typedef struct Employee mama;

void Employee::printDetails(){
    cout<<"printing Employee details";
    cout<<id<<name<<salary<<endl;
}
void Employee::acceptDetails(){
    cout<<"Enter Employee Details";
    cin>>id>>name>>salary;
}
int main(){
    mama details[5];
    for (auto i=0; i<5;i++){
        details[i].acceptDetails();
    }
    for(auto i=0; i<5;i++){
        details[i].printDetails();
    }
    return 0;
}
