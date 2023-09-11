// Complex number help with classes
#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printnumber(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata(12, 2);
    c1.printnumber();

    c2.setdata(3, 32);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();
    return 0;
}
