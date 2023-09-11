#include <iostream>
using namespace std;
class c2;
class c1
{
    int a;
    friend void exchange(c1 &x, c2 &y);

public:
    void setdata(int value)
    {
        a = value;
    }
    void display(void)
    {
        cout << a<<endl;
    }
};
class c2
{
    int b;
    friend void exchange(c1 &x, c2 &y);

public:
    void setdata(int value)
    {
        b = value;
    }
    void display(void)
    {
        cout << b<<endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int tem = x.a;
    x.a = y.b;
    y.b = tem;
}
int main()
{
    c1 a1;
    a1.setdata(23);
    // a1.display();
    
    c2 b1;
    b1.setdata(56);
    // b1.display();

    exchange(a1, b1);
    a1.display();
    b1.display();

    return 0;
}
