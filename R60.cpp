#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Opening the file using constructor and writing it
    // string sq = "Har Har Mahadev";
    // ofstream demo("work.txt");
    // demo << sq;//-->Done
   
    // Opening the file using constructor and writing it
    string sqare;
    ifstream sumo("work.txt");
    sumo >> sqare;
    cout<<sqare;//-->Done

    return 0;
}