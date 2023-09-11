// Coading Inheritance

#include <iostream>
using namespace std;
// Base class
class Employee 
{

public:
    int id;
    float salary;
    void setdata(float b)
    {
        salary = b;
    }
    void getdata(void)
    {
        cout << "The salary of the employee is " << salary << endl;
    }
};

// class programmer Derived from Employee Base class
class programmer : public Employee
{
    int idp;
    int languageCode;

public:
    void setCode(int l)
    {
        idp = 200;
        languageCode = l;
    }
    void getCode()
    {
        cout << id << endl;
        cout << salary << endl;
        cout << languageCode << endl;
    }
};

int main()
{
    // Employee E1;
    // E1.setdata(60000.23);
    // E1.getdata();

    programmer P;
    P.id = 43;
    P.setCode(18);
    P.setdata(5000.54);
    P.getCode();
    return 0;
}