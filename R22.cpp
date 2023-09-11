// Nesting of member function

#include <iostream>
#include <string>
using namespace std;
class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void Binary::read(void)
{
    cout << "Enter the binary number " << endl;
    cin >> s;
    // exit(0); ----> This will new feacture 
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        // cout << endl;
    }
}

void Binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void)
{
    cout << "Displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    Binary B1;
    B1.read();
    B1.chk_bin();
    B1.display();
    B1.ones_compliment();
    B1.display();
    return 0;
}