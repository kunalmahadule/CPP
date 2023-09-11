#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // writing the file

    // connection
    ofstream remo("work.txt");

    //
    string A;
    cout << "Enter the string" << endl;
    cin >> A;

    remo << A + " Har Mahadev"; //-->This is new feacture
    remo.close();               //---->done

    // reading the file

    string fb;

    ifstream go("work.txt");
    // go >> fb;//-->only one char are read
    getline(go, fb);
    cout << fb;
    return 0;
}