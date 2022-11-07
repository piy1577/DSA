#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=0;
    int sum =0;
    

    for(int i=0; i<n; i++){
        max += arr[i];
    }

    for(int i=0;i<n; i++){
        for(int j=i; j<n;j++){
            sum += arr[j];
        }
        if(sum >max){
            max = sum;
            sum =0;
        }else {
            sum =0;
        }
    }

    cout << max;
    return 0;
}