// Overloading Constructor
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int y)
    {
        a = 0;
        b = y;
    }
    void display()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    complex c(2, 5);
    c.display();

    complex t(8);
    t.display();

    complex c3;
    c3.display();
    return 0;
}