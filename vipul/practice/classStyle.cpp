#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    double salary;
public:
    void printDetails();
    void acceptDetails();
};

void Employee::acceptDetails(){
    cout<<"Enter Employee Details"<<endl;
    cin>>id>>name>>salary;
}
void Employee::printDetails(){
    cout<<"Printing Detalis Of Employee";
    cout<<id<<name<<salary<<endl;
}
int main(){

    Employee Akhi;
    Akhi.acceptDetails();
    Akhi.printDetails();
    
    return 0;
    
}
