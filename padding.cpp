#include <iostream>
using namespace std;

class Person {
    public:
    double f;
    int a;
    int b;
    char c;
};

int main(){
    Person p1;

    cout<<sizeof(p1)<<endl;

    return 0;
}