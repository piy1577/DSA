#include <iostream>
using namespace std;

int findpathmaze(int n , int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return findpathmaze(n, i+1, j)+ findpathmaze(n, i, j+1);
}

int main() {
    int n;
    cin >> n;

    cout << findpathmaze(n, 0, 0) << endl;
    return 0;
}