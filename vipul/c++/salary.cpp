#include<iostream>
using namespace std;


    class Employee{
private: //by default private in classes
    const int id;
    string name;
   mutable double sal;
    
    public:
        Employee(int=0); //fuction with default arguments
        Employee(int, const char *,double);//3 parameterized c'tor
        void acceptDetails();
        void dispDetails() const;
        void dispDetails();
    };
    
    int main(){
        const Employee a(1001,"AA",198620.245);//object is const here
        a.dispDetails();//can call const member functions only
        
        Employee b(1002);
        b.acceptDetails();
        b.dispDetails();
    }
    Employee::Employee(int var):id(var){
    }
     Employee::Employee(int var, const char *nm,double sl):id(var),name(nm),sal(sl){
     }
     void Employee::acceptDetails(){
     cout<<"Enter name and salary: ";
     cin>>name>>sal;
     }
             //void dispDetails()const;

     void Employee::dispDetails() const{
         cout<<"const functions id:"<<id<<"\tname: "<<name<<"\tsalary: "<<sal<<endl;
     }
      void Employee::dispDetails(){
          cout<<"non const functions id: "<<id<<"\tname: " <<name<<"\tsalary: "<<fixed<<sal<<endl;
          sal+=10000:
          cout<<"Non const functions id"<<
          
    }
      
      
      
    
        
