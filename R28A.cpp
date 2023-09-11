// more on friend function

#include <iostream>
using namespace std;

class Y;
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void sum(X o1, Y o2);
};

class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void sum(X o1, Y o2);
};

void sum(X o1, Y o2)
{
    cout << "The sum is " << o1.data + o2.num << endl;
}

int main()
{
    X a;
    a.setvalue(3);

    Y b;
    b.setvalue(5);

    sum(a, b);

    return 0;
}