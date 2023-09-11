// swap
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swappointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swappreference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 32, b = 21;
    // cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // cout << "The sum of two integers is " << sum(a, b) << endl;

    // cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swap(a, b);
    // cout << "The value of a is " << a << " and the value of b is " << b << endl;

    // cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swappointer(&a, &b);
    // cout << "The value of a is " << a << " and the value of b is " << b << endl;

    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swappreference(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}