#include <iostream>
using namespace std;

int clear_bit(int n, int i){
    return (n&~(1<<i));
}

int main() {
    cout << clear_bit(5, 2)<<endl;

    return 0;
}