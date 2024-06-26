#include <iostream>
#include <string>
using namespace std;


void fun() {
    static int x = 0; // static variable 
    cout << "Value of x: " << x << endl;
    x++;
}


int main(){
    fun();
    fun();
    fun();
    fun();

    return 0;
}