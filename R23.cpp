// Using array in class

#include <iostream>
using namespace std;
class Shop
{
    int ItemId[10];
    int Itemprice[10];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
} dukaan;
void Shop::setprice(void)
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter price of your item no " << counter + 1 << endl;
    cin >> Itemprice[counter];
    counter++;
}
void Shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << ItemId[i] << " is " << Itemprice[i] << endl;
    }
}
int main()
{
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}

