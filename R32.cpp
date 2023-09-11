#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 48, int c = 77)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void print();
};

void simple ::print()
{
    cout << "The value of data1, data2 and data3 is " << data1 << " ," << data2 <<" and "<< data3 << endl;
}
int main()
{
    simple s1(45);
    s1.print();
    return 0;
}