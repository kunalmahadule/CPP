// Default Constructor

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);

    void display(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(void) // --->default constructor
{
    a = 10;
    b = 4;
}
int main()
{
    complex c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}