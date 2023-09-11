// Parametrized Constructor

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // Parametrized constructor

    void display(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x, int y) // --->Parametrized constructor
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    complex a(4, 5);
    a.display();

    // Explicit call
    complex b = complex(5, 6);
    b.display();
    return 0;
}