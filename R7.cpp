#include <iostream>
using namespace std;
int c = 57;
int main()
{
    // int a;
    // int b;

    // cout << "Enter the value of a " << endl;
    // cin >> a;
    // cout << "Enter the value of b " << endl;
    // cin >> b;

    // int c = a + b;
    // cout << "The value of c is " << c << endl;
    // cout << "The value of global variable c is " << ::c << endl;

    // float d = 75.5f;
    // float v = 85.4;
    // long double k = 75.5l;

    // // cout << "The value of d is " << d << endl
    // //      << "The value of k is " << k << endl;
    // cout << "The size of 85.4 is " << sizeof(85.4) << endl;
    // cout << "The size of 75.7f is " << sizeof(75.5f) << endl;
    // cout << "The size of 75.7F is " << sizeof(75.5F) << endl;
    // cout << "The size of 75.7l is " << sizeof(75.5l) << endl;
    // cout << "The size of 75.7L is " << sizeof(75.5L) << endl;

    // Typecasting

    // int a = 48;
    // float b = 44.4;
    // cout << "The typecast of a is " << a << endl;
    // cout << "The typecast of a is " << (float)a << endl;
    // cout << "The typecast of a is " << float(a) << endl;

    // cout << "The typecast of b is " << b << endl;
    // cout << "The typecast of b is " << (int)b << endl;
    // cout << "The typecast of b is " << int(b) << endl;

    // cout<<endl<<endl;
    // //Driect expression bhi ham

    // cout<<"The expression is "<<float (a + b);

    // **********Reference Variables****************
    // Rohan das --> rohu --> monty --> dangerous coder
    int x = 544;
    int &y = x;
    int &c = y;  // This line is new feature.
    cout<<"c="<<c<<endl;
    cout << x << endl;
    cout << y << endl;
    return 0;
}