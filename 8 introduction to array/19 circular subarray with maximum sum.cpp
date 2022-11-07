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
    int current_sum=0;

    for(int i=0; i<n; i++){
        current_sum += arr[i];
    }

    int sum =0;
    int max=INT_MIN;

    for(int i=0;i<n; i++){
        arr[i] = arr[i] - (2*arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i-1]<0){
            sum =0;
        }
        sum += arr[i];

        if(max <sum){
            max = sum;
        }
    }

    current_sum += max;

    cout << current_sum;

    return 0;
}