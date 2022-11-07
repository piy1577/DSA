#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i< n;i++){
        cin >> arr[i];
    }

    int i=0;
    for(int j=0; j<n;j++){
        if(j==0&&arr[0]> arr[1]){
            i++;
        }else if(arr[j]>arr[j+1]&&arr[j]>arr[j-1]){
            i++;
        }else if(j==n-1&& arr[j]> arr[j-1]){
            i++;
        }
    }

    cout<< i;

    return 0;
}