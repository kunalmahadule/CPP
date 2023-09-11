// Pointers to Objects and Arrow operator

#include <iostream>
using namespace std;
class Venom
{
    int real;
    int imageinary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imageinary = b;
    }
    void getdata(void)
    {
        cout << "The real is " << real << endl;
        cout << "The imageinary id " << imageinary << endl;
    }
};
int main()
{
    Venom *v = new Venom ;
    (*v).setdata(12,24);
    (*v).getdata();
    v->setdata(12,24);
    v->getdata();

    //Array of Object
    int as= 4;
    Venom *peace = new Venom[as];
    // (*peace).setdata(12,4);
    // (*peace).getdata();

    peace->setdata(12,4);
    peace->getdata();

    return 0;
}