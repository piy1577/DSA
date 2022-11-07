#include <iostream>
using namespace std;

int get_Bit(int arr[], int n, int i) {
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]&(1<<i)==1){
            count++;
        }
    }

    return count;
}

int btod(int n){
    int decimal =0;
    while(n>0){
        int lastdigit = n%10;
        decimal= decimal*2 + lastdigit;
        n/=10;
    }

    return decimal;
}

int find(int arr[], int n) {
    int arr1[64];
    for(int i=0; i<64; i++){
        arr1[i] = get_Bit(arr, n, i);
    }

    int binary =0;

    for(int i=63; i>=0; i--)    {
        binary = binary *10 + arr[i];
    }

    return btod(binary);
}

int main(){
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};

    cout << find(arr, 10)<< endl;
    return 0;
}