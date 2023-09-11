// Array of Object using Pointers
#include <iostream>
using namespace std;
class Shop
{
    int Id;
    float price;

public:
    void setData(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The Id of this item is " << Id << endl;
        cout << "The price of this item is " << price << endl;
    }
};
int main()
{
    int size = 4;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id of item no " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item No : " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}