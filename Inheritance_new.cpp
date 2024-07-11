#include <stdio.h>
using namespace std;

// Single Inheritance

class Car
{
    int tyres;

public:
    void print_tyres()
    {
        cout << "I have " << tyres << tyres;
    }
};

class Racing_car : public Car
{
public:
    void display()
    {
        cout << "I am a Racing Car" << endl;
    }
};

// multiple inheritance

// class Mother
// {
// public:
//     void Eyes()
//     {
//         cout << "I have blue eyes" << endl;
//     }
// };

// class Father
// {
// public:
//     void Hair()
//     {
//         cout << "Blonde hair" << endl;
//     }
// };

// class Child : public Mother, public Father
// {
// public:
//     void display()
//     {
//         cout << "I am child" << endl;
//     }
// };

int main()
{
    return 0;
}