#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if(a%2==0&&a%3==0) {
        cout << "Number is divisible by both 2 and 3" << endl;
    }else if(a%2==0 && a%3!=0) {
        cout << "Number is only divisible by 2" << endl;
    }else if(a%3==0 && a%2!=0) {
        cout << "Number is only divisible by 3" << endl;
    }else {
        cout << "Number is not divisible by either 2 or 3"<< endl;
    }

    return 0;
}