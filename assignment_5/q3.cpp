#include <iostream>
using namespace std;

class lab
{
public:
    int count;
    lab()
    {
        count = 0;
        cout << "Default constructor called" << endl;
    }
    lab(int x)
    {
        count = x;
        cout << "Paramatrized constructor called" << endl;
    }

    lab(lab &a)
    {
        count = a.count + 100;
        cout << "Copy constructor called" << endl;
    }
};

int main()
{
    lab o1;
    cout << o1.count << endl;

    int x;
    cin >> x;
    lab o2(x);
    cout << o2.count << endl;
    lab o3 = o2;
    cout << o3.count << endl;
    return 0;
}