#include <iostream>
using namespace std;

bool isSafe(int**arr, int n, int i, int j) {
    for(int x=0; x<i; x++){
        if(arr[x][j]==1){
            return false;
        }
    }
    
    for(int x=0;x<i;x++){
        if(i-x<0||j-x<0){
            break;
        }
        if(arr[i-x][j-x]==1){
            return false;
        }
    }

    for(int x=0; x<i; x++){
        if(i-x<0||j+x>=n){
            break;
        }
        if(arr[i-x][j+x]==1){
            return false;
        }
    }
    return true;
}

bool n_queen(int**arr, int i, int n){
    for(int j=0; j<n; j++){
        if(isSafe(arr, i, j, n)){
            arr[i][j]=1;
            if(n_queen(arr, i+1, n)){
                return true;
            }
            arr[i][j]=0;
        }
    }
    return false;
}
int main() {
    int n;
    cin >>n;

    int**arr = new int*[n];
    
    for(int i=0; i<n; i++){
        arr[i] = new int[10];
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    if(n_queen(arr, 0, n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}