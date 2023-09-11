// Protected Access Modifiers

#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    int b;
    void setdata()
    {
        a = 10;
    }
};

class Derived : public Base
{
};
int main()
{
    Base obj;
    // obj.a;//--->This will throw error because a is protected
    obj.b = 12;
    cout << obj.b << endl;
    obj.setdata();

    Derived dj;
    // cout << dj.a;//This will throw error because a is protected

    return 0;
}