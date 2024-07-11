#include <iostream>
using namespace std;
// 2 Base class and single derived class
class Father{
    public:
    void Eyes(){
        cout<<"I have green eyes"<<endl;
    }
};

class Mother{
    public:
    void Hair() {
        cout<<"I have blonde hair"<<endl;
    }
};

class Child: public Father, public Mother{
    public:
    void display(){
        cout<<"I am child"<<endl;
    }
};

int main()
{

    Child Baby;
    Baby.Eyes();
    Baby.Hair();
    Baby.display();

    
    
    return 0;
}