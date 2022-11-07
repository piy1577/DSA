#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>

int main() {
    int n, m;
    cin >> n >> m;
    vvi adjmatrix(n+1, vi(n+1, 0));

    rep(i, 0 , m) {
        int x, y;
        cin >> x >>y;

        adjmatrix[x][y] = 1;
        adjmatrix[y][x] = 1;
    }

    cout << "adjancency matrix is: " <<endl;

    rep(i, 1, n+1){
        rep(j, 1, n+1)
            cout << adjmatrix[i][j]  << " ";
        cout << endl;
    }
    return 0;
}