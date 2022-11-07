#include <iostream>
#include <map>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b; i++)

int main() {
    int n;cin >> n;
    int arr[n];
    rep(i, 0, n){
        cin >> arr[i];
    }

    map<int, int> m;
    rep(i, 0, n){
        m[arr[i]]++;
    }

    map<int, int>::iterator it;

    for(it= m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}