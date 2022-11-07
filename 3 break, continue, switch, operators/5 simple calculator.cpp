#include <iostream>
using namespace std;

int main() {
    int a,b;
    char c;

    cout << "Type your equation with space" << endl;

    cin >> a >> c >> b;

    switch (c)
    {
    case '+':
        cout << a+b << endl;
        break;

    case '-':
        cout << a-b << endl;
        break;

    case '*':
        cout << a*b<< endl;
        break;

    case '/':
        cout << a/b << endl;
        break;
    
    default:
        cout << "Type a correct equation";
        break;
    }
}