#include <iostream>
using namespace std;

int main()
{

    int marks = 90;
    cout << marks << endl;
    cout << &marks << endl;

    int *marking = &marks;
    cout << marking << endl;
    cout << *marking << endl; //dereferencing

    return 0;
}