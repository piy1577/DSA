#include <iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=1; i<=n;i++){
        f*=i;
    }

    return f;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    int ans = num/denom;

    return ans;
}

int main() {
    int n;
    cin >> n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}