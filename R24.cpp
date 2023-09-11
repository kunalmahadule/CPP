// Static variable in class

#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of employe no " << count << " is " << id << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; //---->This is important point

int main()
{
    Employee harry, rohan;
    harry.setdata();
    harry.getdata();
    Employee ::getcount(); //----->This is important point

    rohan.setdata();
    rohan.getdata();
    Employee ::getcount(); //---->This is important point
    return 0;
}