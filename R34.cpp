// copy constructor

#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // when copy constructor does not create from programer compiler allocate our own constructor
    Number(Number &obj)
    {
        cout << "Copy constructor are called$$$$$" << endl;
        a = obj.a;
    }
    void print()
    {
        cout << "The value of this object a is " << a << endl;
    }
};

int main()
{
    Number x, y, z(64), z2;
    x.print();
    y.print();
    z.print();

    z2 = z;//Copy Constructor not invoked
    z2.print();
    
    Number z1(z);//Copy Constructor invoked
    z1.print();

    Number z3 = z;//Copy Constructor invoked
    z3.print();
    return 0;
}