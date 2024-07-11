#include <iostream>
using namespace std;

class Father{
    public:
    void display(){
        cout<<"I am the father"<<endl;
    }
};

class Child:public Father{
    public:
    void display(){
        cout<<"I am the child"<<endl;
    }
};
int main(){
    Child baby;
    baby.display();
    return 0;
}