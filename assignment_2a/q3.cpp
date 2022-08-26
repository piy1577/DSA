#include <iostream>
using namespace std;

struct complex
{
    int real;
    int imaginary;
} a, b;

void read(complex &a)
{
    cin >> a.real >> a.imaginary;
}

void display(complex a)
{
    cout << "real number is: " << a.real << endl;
    cout << "imaginary number is: " << a.imaginary << endl;
}

complex sum(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

complex subtract(complex a, complex b)
{
    complex c;
    c.real = a.real - b.real;
    c.imaginary = a.imaginary - b.imaginary;
    return c;
}

int main()
{
    read(a);
    read(b);
    display(sum(a, b));
    display(subtract(a, b));
    return 0;
}