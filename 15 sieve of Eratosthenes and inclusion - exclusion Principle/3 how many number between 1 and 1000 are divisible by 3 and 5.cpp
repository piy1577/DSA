#include <iostream>
using namespace std;

int number_divisible(int s, int e, int d){
    int s1 = s/d;
    int e1 = e/d;
    return (e1 - s1);
}
int main() {
    cout << number_divisible(1, 40, 7) + number_divisible(1, 40, 5) - number_divisible(1, 40, 35) <<endl;
    return 0;
}