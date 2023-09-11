// Visibility Mode --->Private

#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int Base::getdata1()
{
    return data1;
}

int Base::getdata2()
{
    return data2;
}

// class Derived is derived from Base class
class Derived : private Base
{
public:
    int data3;
    void process();
    void getAlldata();
};

void Derived::process()
{
    setdata();
    data3 = data2 * getdata1();
}

void Derived::getAlldata()
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}

int main()
{
    Derived d;
    // d.setdata();//-->Because visibility mode is private
    d.process();
    d.getAlldata();
    return 0;
}

//=============================================================================

// Visibility Mode --->Public

#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base::setdata()
{
    data1 = 11;
    data2 = 12;
}

int Base::getdata1()
{
    return data1;
}

int Base::getdata2()
{
    return data2;
}

class Derived : public Base
{
public:
    int data3;
    void process();
    void getAlldata();
};

void Derived::process()
{
    data3 = data2 + getdata1();
}

void Derived::getAlldata()
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}
int main()
{
    Derived oak;
    oak.setdata();  // class inherited in public (Direct Access in main())
    oak.data2 = 20; // class inherited in public (Direct Access in main())
    oak.process();
    oak.getAlldata();
    return 0;
}