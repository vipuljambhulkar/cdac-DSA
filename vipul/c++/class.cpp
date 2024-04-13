#include<iostream>
using namespace std;

class Employee{
    int id ;
    string name ;
    double salary;
    
public:
    void getDetails();
    void printDetails();
    
};


void Employee::getDetails(){
    cout<<"Enter id name and salary : ";
    cin>>id>>name>>salary;
}
void Employee::printDetails(){
    cout<<"ID: "<<id<<"\tName: "<<name<<"\tSalary: "<<salary<<endl;
}

int main(){
   Employee obj;
   obj.getDetails();
   obj.printDetails();
}


