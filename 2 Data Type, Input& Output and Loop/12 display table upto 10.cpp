#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tell the number of which you want it's table"<< endl;
    cin >> n;

    for (int i =1; i<=10; i++){
        cout << n << " x " << i << " = " << n*i<< endl;
    }

    return 0;
}