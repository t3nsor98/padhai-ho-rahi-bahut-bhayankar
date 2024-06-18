// multilevel inheritance

#include <iostream>
using namespace std;

// Base 1
class Grandfather
{

public:
    void display1()
    {
        cout << "Bahut Khandani Paisa Hai." << endl;
    }
};
// Base 2
class Father : public Grandfather
{
public:
    void display2()
    {
        cout << "Khandani bi he and savings bi he." << endl;
    }
};

// Base 3
class NalayakBeta : public Father
{
public:
    void display3()
    {
        cout << "Khandani bi he and savings bi he lekin me nalla hu." << endl;
    }
};

int main()
{

    NalayakBeta freefire_khelene_wala;

    freefire_khelene_wala.display1();
    freefire_khelene_wala.display2();
    freefire_khelene_wala.display3();

    return 0;
}