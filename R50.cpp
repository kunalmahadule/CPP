// Revisiting Pointers new and delete keywords in C++

#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setdata(int p1, int p2)
    {
        a = p1;
        b = p2;
    }
    void getdata(void)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Complex *ptr = new Complex;
    // Using (.) operator
    // (*ptr).setdata(12,3);
    // (*ptr).getdata();

    // Using (->) operator
    ptr->setdata(12,3);
    ptr->getdata();

    int *ptr1 = new int [4];
    ptr1[0] = 43;
    ptr1[1] = 6;
    ptr1[2] = 8;
    ptr1[3] = 55;
    delete ptr1;
    cout<<"The value of ptr1[0] is " <<ptr1[0]<<endl;
    cout<<"The value of ptr1[1] is " <<ptr1[1]<<endl;
    delete[] ptr1;
    cout<<"The value of ptr1[2] is " <<ptr1[2]<<endl;
    cout<<"The value of ptr1[3] is " <<ptr1[3]<<endl;
    return 0;
}