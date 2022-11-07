#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    vector<string> soduku;
    rep(i, 0, 9){
        cin >> soduku[i];
    }

    rep(i, 0, 9){
        cout << soduku[i];
    }
    return 0;
}