#include <iostream>
using namespace std;

// single Inheritance

class Car
{
public:
    int tyres;
    void display()
    {
        cout << "I am a car" << endl;
    }
};

class Derived : public Car
{
public:
    void display1()
    {
        cout << "I am derived class" << endl;
    }
};
int main()
{

    Derived tarzan;
    tarzan.display();
    tarzan.display1();

    return 0;
}