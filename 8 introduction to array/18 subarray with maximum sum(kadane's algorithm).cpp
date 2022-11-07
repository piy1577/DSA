#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum =0;
    int max =INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i-1]<0){
            sum =0;
        }
        sum += arr[i];
        if(sum >max){
            max = sum;
        }
    }

    cout << max;

    return 0;
}