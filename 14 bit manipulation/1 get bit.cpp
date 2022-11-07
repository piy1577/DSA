#include <iostream>
using namespace std;

int get_bit(int n, int i){
    return ((n&(1<<i))!=0);
}

int main() {
    cout << get_bit(6, 2) << endl;

    return 0;
}