// call by value

#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = 10; // original value
    cout << x <<endl;
}

int main()
{
    int a = 56;
    cout << "Before call:" << a << endl;
    callByValue(a);
    cout << "After call:" << a << endl;
    return 0;
}