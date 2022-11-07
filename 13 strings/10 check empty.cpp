#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abc";
    cout << str << endl;

    str.clear();
    if(str.empty()){
        cout << "String is empty";
    }

    return 0;
}