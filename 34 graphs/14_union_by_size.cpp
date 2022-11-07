#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
vi parent;
vi size;
void make(int v){
    parent[v] = v;
    size[v] =1;
}

int find_set(int v){
    if(parent[v]== v) {
        return v;
    }

    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b){
    a= find_set(a);
    b = find_set(b);

    if(a!= b){
        if(size[a] > size[b]){
            swap(a, b);
        }
        parent[b] = a;
        size[a] += b;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, n){
        make(i);
    }

    rep(i, 0, m){
        int x, y;
        cin >> x >> y;
        union_set(x,y);
    }
    return 0;
}