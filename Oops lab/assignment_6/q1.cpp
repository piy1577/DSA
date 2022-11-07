#include <iostream>
using namespace std;

class Overloading
{
    int x, y, z;

public:
    Overloading(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }

    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    int getz()
    {
        return z;
    }
    Overloading operator++(int)
    {
        Overloading b(++x, ++y, ++z);
        return b;
    }

    Overloading
    operator--(int)
    {
        Overloading a(--x, --y, --z);
        return a;
    }

    Overloading operator+(Overloading &a)
    {
        Overloading b(x + a.getx(), y + a.gety(), z + a.getz());
        return b;
    }

    bool operator==(Overloading &a)
    {
        if (x == a.getx())
        {
            if (y == a.gety())
            {
                if (z == a.getz())
                {
                    return true;
                }
                return false;
            }
            return false;
        }
        return false;
    }
};

int main()
{
    Overloading c(1, 2, 3);
    Overloading d(4, 5, 6);
    c++;
    d--;
    c = c + d;
    cout << "x= " << c.getx() << " y= " << c.gety() << " z= " << c.getz() << endl;
    cout << (c == d) << endl;
    return 0;
}