#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "nincompoop";
    str.erase(3, 3);
    cout << str << endl;

    return 0;
}