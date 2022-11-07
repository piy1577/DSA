#include <iostream>
using namespace std;

class complex {
    int real, image;

    public:
    complex(int re, int img){
        real = re;
        image = img;
    }

    complex operator + (complex &a){
        complex c(0, 0);
        c.real = real + a.real;
        c.image = image + a.image;

        return c;
    }

    void display() {
        cout << real  << " + " << image << "i "<< endl; 
    }
};

int main() {
    complex c1(12, 7);
    complex c2(6, 7);

    complex c3 = c1 + c2;

    c3.display();

    return 0;
}