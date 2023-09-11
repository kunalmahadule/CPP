// 2nd Example of parameterzed constructor

#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "The point is (" << x << " ," << y << ")" << endl;
    }
};

int main()
{
    point c(1, 2);
    c.display();

    point b = point(5, 6);
    b.display();
    return 0;
}

// d = √[( y2 –  y1)² + ( x1 –  x2)²]