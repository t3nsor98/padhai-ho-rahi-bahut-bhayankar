#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 20;
    double result = a + b;
    cout << result << endl;
    //implicit type conversion
    double d = (double) a ;
    //explicit type conversion

    cout << d <<endl<<sizeof(d)<< endl;


    return 0;
};