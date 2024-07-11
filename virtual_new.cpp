#include <iostream>
using namespace std;

class Draw{
    public:
    virtual void print_Shape() = 0;
};

class Triangle : public Draw{
    public:
    void print_Shape(){
        cout<<"This is Triangle."<<endl;
    }
};

class Rectangle : public Draw{
    public:
    void print_Shape(){
        cout<<"This is Rectangle."<<endl;
    }
};

int main(){
    Rectangle R1;
    R1.print_Shape();
    // Draw D1;
    // D1.print_Shape();
    return 0;
}