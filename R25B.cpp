// Using Array in c++

#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        int salary = 1100;
        cout << "Enter the id of Employee" << endl;
        cin >> id;
        cout << "The salary is " << salary << endl;
    }
    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry,rohan,lovish,kunal;
    // harry.setid();
    // harry.getid();
    // int FB[100];

    Employee facebook[4];
    for (int i = 0; i < 4; i++)
    {
        facebook[i].setid(); // This line is remembered.
        facebook[i].getid();
    }

    return 0;
}
