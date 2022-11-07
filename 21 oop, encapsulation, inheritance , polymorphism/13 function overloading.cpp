#include <iostream>
using namespace std;

class A {
    public:
    void func(){
        cout << "function with no argument"<< endl;
    }

    void func(int a){
        cout << "function with int argument" <<endl;
    }

    void func(double a){
        cout << "function with double argument" << endl;
    }
};

int main() {
    A a;
    a.func();
    a.func(1);
    a.func(1.111);

    return 0;
}