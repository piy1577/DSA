#include <iostream>
using namespace std;

class A{
    public:
    void funcA() {
        cout << "class A inherited"<< endl;
    }
};

class C{
    public:
    void funcC() {
        cout << "class C inherited" << endl;
    }
};

class B: public A {
    public:
    void funcB() {
        cout << "class B inherited" << endl;
    }
};

class D: public B, public C {

};

int main() {
    D d;

    d.funcA();
    d.funcB();
    d.funcC();

    return 0;
}