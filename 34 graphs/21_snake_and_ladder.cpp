#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
map<int, int> ladder;
map<int, int> snakes;
vi vis(101, 0);

int snakeandladder() {
    int moves =0;
    bool found =false;
    queue<int> q;
    q.push(1);
    vis[1] = true;

    while(!q.empty() && !found){
        int sz = q.size();
        while(sz--){
            int x = q.front();
            q.pop();
            for(int i=1; i<=6;i++){
                if(x+i ==100){
                    found=true;
                }

                if(!vis[ladder[x+i]] && ladder[x+i] && x+i <=100){
                    q.push(ladder[x+i]);
                    vis[ladder[x+i]] = true;
                    if(ladder[x+i]==100){
                        found=true;
                    }
                }else if(!vis[snakes[x+i]] && snakes[x+i] && x+i <=100){
                    q.push(snakes[x+i]);
                    vis[snakes[x+i]] =true;
                    if(snakes[x+i]==100){
                        found =true;
                    }
                }else if(x+i <=100 && !vis[x+i]) {
                    q.push(x+i);
                    vis[x+i] = true;
                }
            }
        }
        moves++;
    }
    return moves;
}

int main() {
    int n; cin>>n;
    rep(i, 0, n){
        int x, y;
        cin >> x >>y;
        ladder[x] = y;
        ladder[y] = x;
    }

    int m;cin >>m;
    rep(i, 0, m){
        int x,y;
        cin >> x>> y;
        snakes[x] = y;
        snakes[y] = x;
    }

    int moves =snakeandladder();
    
    cout << "Number of moves is: "<<moves <<endl;
    return 0;
}