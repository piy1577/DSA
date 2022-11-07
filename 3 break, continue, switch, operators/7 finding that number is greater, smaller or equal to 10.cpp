#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    if(n==10){
        cout << "Number is equal to 10" <<endl;
    }else if( n>10) {
        cout << "Number is greater than 10" << endl;
    }else {
        cout << "Number is smaller than 10" << endl;
    }

    return 0;
}