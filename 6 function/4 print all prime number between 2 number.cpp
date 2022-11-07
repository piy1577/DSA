#include <iostream>
using namespace std;

bool check_prime(int n){
    for(int div=2;div<n;div++){
        if(n%div ==0){
            return false;
        }
    }
    return true;
}

void find(int a, int b){
    for(int i=a;i<=b;i++){
        if(check_prime(i)){
            cout << i << endl;
        }
    }
}

int main() {
    int x, y;
    cin >> x >> y;

    find(x, y);

    return 0;
}