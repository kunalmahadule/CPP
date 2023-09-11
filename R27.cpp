// friend class

#include <iostream>
using namespace std;
// forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex , complex );
    int sumcompcomplex(complex , complex );
};

class complex
{
    int a;
    int b;
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);

    friend class calculator;

public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(2, 5);
    o1.printnumber();
    o2.setnumber(3, 7);
    o2.printnumber();

    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part is " << res << endl;

    calculator calc2;
    int res2 = calc2.sumcompcomplex(o1, o2);
    cout << "The sum of complex part is " << res2 << endl;
    

        return 0;
}
