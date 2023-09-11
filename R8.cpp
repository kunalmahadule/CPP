#include <iostream>
#include <iomanip> //This term is remember you
using namespace std;

int main()
{
    // Manipulators
    // int a = 54, b = 583, c = 8933;

    // cout << "The value of a is " << a << endl;
    // cout << "The value of b is " << b << endl;
    // cout << "The value of c is " << c << endl;
    // cout<<endl;
    // cout << "The value of a is " << setw(5) << a << endl;
    // cout << "The value of b is " << setw(5) << b << endl;
    // cout << "The value of c is " << setw(5) << c << endl;

    //Operator Precedence
    int a = 3;
    int b = 6;

    int c = (a*5)+b;
    cout<<"The c is "<<c;
    // int c = ((((a * 5) + b) - 45) + 87);//operator precedence or accociativity ke help se solve kiya hai (Precendence/Associativity)

    return 0;
}