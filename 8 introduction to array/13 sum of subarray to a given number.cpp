#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int s;
    cin >> s;
    int sum=0;

    for(int i=0;i <n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
            if(sum ==s){
                cout << i+1 << " and " << j+1 << endl;
            }else {
                sum =0;
            }
        }
    }

    return 0;
}