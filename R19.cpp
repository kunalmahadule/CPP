// function overloading

#include <iostream>
using namespace std;
int sum(int a, float b)
{
    return a + b;
}

int sum(int x, int y, int z)
{
    return z + y + z;
}
// volume of cylinder is
int Cylinder(int r, int h)
{
    return (3.14 * r * r * h);
}
// volume of cube
int Cube(int a)
{
    return (a * a * a);
}
// Rectangle box volume
int rectangle(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    // cout << "The sum of 7 and 8 is " << sum(7, 8) << endl;
    // cout << "The sum of 7, 8 and 12 is " << sum(7, 8, 12) << endl;

    cout << "The volume of cylinder are " << Cylinder(4, 8)<<endl;
    cout << "The volume of cube are " << Cube(12)<<endl;
    cout << "The volume of cylinder are " << rectangle(43, 5, 67)<<endl;
    return 0;
}
// volume of cyl ---> pi*r2*h
// volume of cube ---> a3
// rectangle box ---> l*b*h