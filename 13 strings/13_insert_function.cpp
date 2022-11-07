#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "nincompoop";
    str.insert(3, "lol");
    cout << str << endl;

    return 0;
}