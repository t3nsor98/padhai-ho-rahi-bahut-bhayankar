#include <iostream>
using namespace std;

// Multilevel Inheritance
//Base -> Derived class -> Derived class

class GrandMother{
    public:
    void Paisa(){
        cout<<"bahut khandanai paisa hai"<<endl;
    }
};

class Mother:public GrandMother{
    public:
    void Savings(){
        cout<<"savings bi he"<<endl;
    }
};

class Daughter:public Mother{
    public:
    void kuchh_nehi(){
        cout<<"Bhai jeb khali he"<<endl;
    }
};


int main() {
    Daughter Chutki;
    Chutki.Paisa();
    Chutki.Savings();
    Chutki.kuchh_nehi();

    return 0;
}