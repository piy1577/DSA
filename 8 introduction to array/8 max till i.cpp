#include <iostream>
#include <climits>
using namespace std;

int max(int arr[], int n, int i) {
    int max = INT_MIN;
    for(int j=0; j<=i;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }

    return max;
}


int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0; i<n;i++){
     cout << max(arr, n, i) << " ";
    }

    return 0;
}