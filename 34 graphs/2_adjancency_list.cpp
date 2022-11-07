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
    vi adjmatrix[n+1];
    rep(i, 0, m){
        int x, y;
        cin >> x >> y;
        adjmatrix[x].push_back(y);
        adjmatrix[y].push_back(x);
    }

    rep(i, 1, n+1) {
        cout << i << "->";
        for(int x: adjmatrix[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}