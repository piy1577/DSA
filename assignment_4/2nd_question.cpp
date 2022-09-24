#include <iostream>
using namespace std;

inline int multiplication(int a, int b)
{
    return a * b;
}

inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Multiplication value of a and b is: " << multiplication(a, b) << endl;
    cout << "Cubic value of a is: " << cube(a) << endl;
    cout << "Cubic value of b is: " << cube(b) << endl;
    return 0;
}