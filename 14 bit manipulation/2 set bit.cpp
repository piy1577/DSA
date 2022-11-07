#include <iostream>
using namespace std;
int set_bit(int n, int i){
    return (n|(1<<i));
}
int main() {
    cout << set_bit(5, 1);

    return 0;
}