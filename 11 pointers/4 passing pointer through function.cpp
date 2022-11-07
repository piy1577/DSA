#include <iostream>
using namespace std;
void inc(int* a){
    *a++;
}
int main() {
    int a =10;
    inc(&a);

    cout << a << endl;
    return 0;
}