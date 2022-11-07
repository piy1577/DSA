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

    int min=INT_MAX;

    for(int i=0;i<n; i++){
        for(int j=0; j<i;j++){
            if(arr[i]==arr[j]&&j<min){
                min =j;
            }
        }
    }

    cout << min+1 << endl;

    return 0;
}