#include <iostream>
using namespace std;

class A {
    public:
    void funA() {
        cout << "Class A inherited"<<endl;
    }
};

class B {
    public:
    void funB() {
        cout << "Class B inherited" <<endl;
    }
    
};

class C: public A, public B {

};

int main() {
    C c;

    c.funA();
    c.funB();

    return 0;
}