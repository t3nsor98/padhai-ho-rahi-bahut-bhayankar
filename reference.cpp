#include <iostream>
using namespace std;

int main() {
    string food = "Biriyani";
    string &lunch = food; //ampersand

    cout << food <<endl;
    cout << lunch << endl;

    // food = "Veg Pulao";
    lunch = "Dum Biriyani";

    cout << food << endl;
    cout << lunch << endl;

    return 0;
}