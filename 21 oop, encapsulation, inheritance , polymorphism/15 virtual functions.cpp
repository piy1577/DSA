#include <iostream>
using namespace std;

class A {
    public:
    virtual void print() {
        cout << "This is the print function of A class"<< endl;
    }

    void display() {
        cout << "This is the display function of A class" << endl;
    }
};

class B: public A {
    public:
    void print() {
        cout << "This is the print function of B class"<< endl;
    }

    void display() {
        cout << "This is the display function of B class" << endl;
    }
};

int main() {
    A *aptr;
    B b;

    aptr = &b;

    aptr -> display();

    aptr -> print();

    return 0;
}