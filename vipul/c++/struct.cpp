#include<iostream>
using namespace std;
// C STYPE CODE==================================================
struct Emplooeye {
    int id;
    string name;
    double salary;    
};
void acceptDetails(Emplooeye &);//call by value
void printdetails( Emplooeye);// call by refrence
//============================================================================
void acceptDetails(Emplooeye &var){
    cout<<"Enter id,name and salary: ";
    cin>>var.id>>var.name>>var.salary;
}
//==========================================================================
void printdetails(Emplooeye var){
    cout<<"Id: "<<var.id<<"\tName: "<<var.name<<"\tSalary: "<<var.salary<<endl;
}

int main(){
     Emplooeye var;
     acceptDetails(var);
     printdetails(var);
     return 0;
}
