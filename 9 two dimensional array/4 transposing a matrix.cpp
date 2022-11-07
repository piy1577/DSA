#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int arr[n][n];

    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>9){
                cout << arr[i][j]<< " ";
            }else {
                cout << arr[i][j] << "  ";
            }
        }

        cout << endl;
    }
    cout << endl << endl << endl;

    int arr1[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr1[i][j] = arr[j][i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]= arr1[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>9){
                cout << arr[i][j]<<" ";
            }else {
                cout << arr[i][j]<< "  ";
            }
        }
        cout << endl;
    }

    return 0;
}