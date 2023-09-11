// Inline function
#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    static int c = 0;
    c = c + 1;
    return a * b + c;
}
int InterestRate(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}
// function ke ander modification na ho argument isliye hum const lagate hai

// int strlen(const char *p)
// {

// }

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b " << endl;
    // cin >> a >> b;

    // cout << "The product of the two variables is " << product(a, b) << endl;
    // cout << "The product of the two variables is " << product(a, b) << endl;
    // cout << "The product of the two variables is " << product(a, b) << endl;
    // cout << "The product of the two variables is " << product(a, b) << endl;
    // cout << "The product of the two variables is " << product(a, b) << endl;

    // Default argument
    // int money = 100000;
    int money;
    cout << "Enter amount you will deposit in your bank account " << endl;
    cin >> money;
    cout << "If you have " << money << " Rs in your bank account you will receive " << InterestRate(money) << endl;

    cout << "For VIP: If you have " << money << " Rs in your bank account you will receive " << InterestRate(money, 1.1) << endl;

    return 0;
}
