// Destructor

#include <iostream>
using namespace std;
int count = 0;
class cat
{
public:
    cat()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~cat()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside the main" << endl;
    cout << "We are creating first object n1" << endl;
    cat n1;
    {
        cout << "Entering this block " << endl;
        cout << "We are creating two more objects n2 and n3 " << endl;
        cat n2, n3;
        cout << "Exiting this block " << endl;
    }
    cout << "Back to main " << endl;
    return 0;
}