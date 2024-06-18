#include <iostream>
using namespace std;

//Base 1
class Human {
    public:
    // void meow() {
    //     cout << "Meow Human" << endl;
    // }
    void display1() {
        cout << "I am human" << endl;
    }
};

//Base 2
class Vampire{
    public:
    void display2() {
        cout<<"I am Vampire" << endl;
    }
    // void meow()
    // {
    //     cout << "Meow Vampire" << endl;
    // }
};


//Multiple Inheritance
class Bella : public Human, public Vampire{
    public:
    void display3() {
        cout << "I am Bella" << endl;
    }
};


int main() {
    Bella lulu;
    lulu.display1();
    lulu.display2();
    lulu.display3();
    // lulu.meow();


    return 0;
}