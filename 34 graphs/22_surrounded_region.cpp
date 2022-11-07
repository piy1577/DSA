#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

void change(vector<vector<char>> &A, int i, int j){
    A[i][j] ='*';
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for(int k=0; k<4;k++){
        int cx = i+dx[k];
        int cy = j+dy[k];
        if(cx>=0 && cy >=0&& cx<A.size() && cy < A[0].size() && A[cx][cy]=='O'){
            change(A, cx, cy);
        }
    }
}

int main() {
    int n, m;
    cin >> n >>m;

    vector<vector<char>> grid(n, vector<char>(m));
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> grid[i][j];
        }
    }

    rep(i, 0, n){
        rep(j, 0,m){
            if((i==0||i==n-1||j==0||j==m-1)&&grid[i][j] =='O'){
                change(grid, i, j);
            }
        }
    }

    rep(i, 0, n){
        rep(j, 0, m){
            if(grid[i][j]=='O'){
                grid[i][j] ='X';
            }
        }
    }

    rep(i, 0, n){
        rep(j, 0, m){
            if(grid[i][j]=='*'){
                grid[i][j]='O';
            }
        }
    }

    rep(i, 0, n){
        rep(j, 0 ,m){
            cout << grid[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}