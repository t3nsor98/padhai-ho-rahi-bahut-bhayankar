#include <iostream>
using namespace std;

class Parent {
    public:
    virtual void print(){
        cout<<"This is from Parent class."<<endl;
    };
};


class Child: public Parent {
    public:
    void print(){
        cout<<"This is from child class."<<endl;
    };
};








int main() {
    Parent A;
    A.print();
    Child B;
    B.print();


    return 0;
};