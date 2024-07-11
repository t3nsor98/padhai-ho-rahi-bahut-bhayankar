#include <iostream>
using namespace std;

class Teacher
{
public:
    //constructor

    //parameterized constructor
    Teacher(int age, int salary, string Department)
    {
        this->age = age;
        this->salary = salary;
        this->Department = Department;
    }
    //non parameterized constructor
    // Teacher() {
    //     cout<<"Me hu constructor"<<endl;
    // }
    int age;
    int salary;
    string Department;

    void print()
    {
        cout << "Age-" << age << "Salary-" << salary << "Department-" << Department << endl;
    }

    ~Teacher(){
        cout<<"Me hu destructor"<<endl;
    }
};

int main() {
    Teacher t1(45, 10000000, "Mathematics");

    Teacher t2 = t1;
    // t1.age = 24;
    // t1.salary = 100000;
    // t1.Department = "Computer Science";
    t1.print();
    t2.print();
    return 0;
}