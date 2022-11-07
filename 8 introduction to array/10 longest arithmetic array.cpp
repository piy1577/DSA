#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >>n;
    }

    int i =2;
    int d=arr[1]- arr[0];
    int max =2;

    for(int j=2; j<n; j++){
        if(arr[j]-arr[j-1]==d){
            i++;
        }else {
            d= arr[j]-arr[j-1];
            if(max >i){
                i =2;
                
            }else{
                max =i;
                i=2;
            }
        }
    }

    cout << max;
    return 0;
}