#include <iostream>
using namespace std;

class A{
    public:
    void funcA(){
        cout << "Base class inherited" << endl;
    }
};

class B: public A{
    public:
    void funcB() {
        cout << "first derived class inherited" << endl;
    }
};

class C: public B {

};

int main() {
    C c;

    c.funcA();
    c.funcB();

    return 0;
}