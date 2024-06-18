#include <iostream>
using namespace std;

void callBYReference(int &x)
{
    x = 1000; // original value
    cout << x << endl;
}

int main()
{
    int a = 10;
    cout << "Before Call: " << a << endl;
    callBYReference(a);
    cout << "After Call: " << a << endl;
    return 0;
}