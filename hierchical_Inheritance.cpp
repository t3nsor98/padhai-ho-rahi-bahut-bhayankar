#include <iostream>
using namespace std;

//Base class
class Animal{
    public:
    void sound(){
        cout << "I am an animal" << endl;
    }
};

// sab ke sab derived class he upar waley base class ka
class Mammal: public Animal{
    public:
    void soundM(){
        cout << "I am a mammal" << endl;
    }
};

class Bird: public Animal{
    public:
    void soundB(){
        cout << "I am a bird" << endl;
    }
};

class Reptile: public Animal{
    public:
    void soundR(){
        cout << "I am a reptile" << endl;
    }
};

class Fish: public Animal{
    public:
    void soundF(){
        cout << "I am a fish" << endl;
    }
};



int main(){

    Mammal m1;
    Bird b1;
    Reptile r1;
    Fish f1;

    m1.sound();
    b1.sound();
    r1.sound();
    f1.sound();

    m1.soundM();
    b1.soundB();
    r1.soundR();
    f1.soundF();




    return 0;
}