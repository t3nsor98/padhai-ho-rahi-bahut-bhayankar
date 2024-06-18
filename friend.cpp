#include <iostream>
using namespace std;

class Puncturewala
{
    int marks;

public:
    // friend function declarations
    friend void display(Puncturewala mark)
    {
        void setMarks(int m)
        {
            marks = m;
        }
    }
};


void Puncturewala::setMarks(int m)
{
    marks = m;
}

void display(Puncturewala mark)
{
    cout << "Enter the mark of puncture wala" << endl;
}

int main()
{

    Puncturewala Rk;

    Rk.setMarks(50);
    display(Rk);
    return 0;
}