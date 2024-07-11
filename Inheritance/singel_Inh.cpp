// #include <stdio.h>
#include <iostream>
using namespace std;
//Single Base Class and single Derived class
class Car{
    int engine;
    string name;
    public:
    void Tyres(){
        cout<<"I have 4 tyres"<<endl;
    }
};

class Racing_car:public Car{
    public:
    void display(){
        cout<<"I am a racing car"<<endl;
    }
};


int main(){
    Car C1;
    Racing_car R1;

    R1.Tyres();
    R1.display();


    return 0;
}