#include <iostream>
#include <string>
using namespace std;

// sum
template <typename T>
T sum(T a, T b){

    return a + b;
}


//class templates

template <typename T>
class MCA {
    private:
    T age;
    T marks;
    public:
    MCA(T a, T m){
        age = a;
        marks = m;
    }
    T getAge(){
        return age;
    }
    T getMarks(){
        return marks;
    }
};

int main(){

    int a = sum(4,7);
    cout<<a<<endl;
    double b = sum(3.67,8.69);
    cout<<b<<endl;

    MCA <int> m1(4,5);
    MCA <double> m2(3.67,8.69);
    cout<<m1.getAge()<<endl;
    cout<<m2.getMarks()<<endl;
    

    return 0;
}