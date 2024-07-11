#include <iostream>
using namespace std;

// function overloading
int Calculate(int a, int b)
{
    return a + b;
};
double Calculate(double a, double b)
{
    return a + b;
};

int main()
{

    int Sum = Calculate(4, 5);
    cout << Sum << endl;
    double Sum1 = Calculate(4.5, 5.5);
    cout << Sum1 << endl;

    return 0;
}