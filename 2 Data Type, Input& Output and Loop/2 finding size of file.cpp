#include <iostream>
using namespace std;

int main() {
    int a;//declaration
    a = 27; //initialisation

    cout<< "size of int is: " << sizeof(a)<< " bytes" << endl;

    float b;
    cout << "size of float is: " << sizeof(b) <<" Bytes"<< endl;

    char c;
    cout << "size of char is: " << sizeof(c) << " Bytes"<< endl;

    bool d;
    cout << "size of bool is: " << sizeof(d) << " Bytes" << endl;

    short int e;
    cout << "size of short int is: " << sizeof(e) << " Bytes" << endl;

    long int f;
    cout << "size of long int is: "<< sizeof(f) << " Bytes" << endl;

    return 0;
}