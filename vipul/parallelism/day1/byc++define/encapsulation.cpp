#include"Abstraction.h"
using namespace std;

Anime::Anime(){
    cout<<"Anime Naruto:"<<endl;
}
Anime::Anime(int x):power(x){
    power =  x;
    x=1;
    cout<<"Anime Second"<<x<<endl;
}
Anime::~Anime(){
    
    cout<<"Anime threed"<<endl;
}
void Anime::Fight(){
    cout<<"Anime Fourth"<<endl;
}
void Anime::FightOne(){
    cout<<"Anime five"<<endl;
}
