#include <iostream>
using namespace std;

int main(){
    int n,m, target;
    cin >> n >> m >> target;

    int mat[n][m];

    for(int i =0; i<n; i++){
        for(int j=0; j<m ; j++){
            cin >> mat[i][j];
        }
    }

    int s =0, e = m-1;
    bool ans = false;

    while(s<n|| e>0){
        if(mat[s][e]== target){
            ans = true;
        }
        if(mat[s][e]>target){
            e--;
        }else {
            s++;
        }
    }

    if(ans){
        cout << "Element found"<<endl;
    }else {
        cout << "Element does not exist"<<endl;
    }

    return 0;
}