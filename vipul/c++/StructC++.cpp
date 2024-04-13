#include<iostream>
using namespace std;

struct Emplooye {
    int id;
    string name ;
    double salary ;
    
    void getDetails();
    void printDetails();
};

void Emplooye::getDetails(){
    cout<<"Enter id name and salary : ";
    cin>>id>>name>>salary;
}
void Emplooye::printDetails(){
    cout<<"ID: "<<id<<"\tName: "<<name<<"\tSalary: "<<salary<<endl;
}

int main(){
    Emplooye arr[5];
    for(auto i = 0; i<5; i++)
        arr[i].getDetails();
    
    for(auto i = 0; i<5; i++)
        arr[i].printDetails();
}
