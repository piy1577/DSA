#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;
    

    

    int s = 0;
    int e= n-1;
    bool ans;

    while(n>0){
        if(arr[s]+ arr[e]>k){
            e--;
        }else if(arr[s]+ arr[e]<k){
            s++;
        }else if(arr[s]+ arr[e]==k){
            break;
            ans = true;
        }else if(s>=e){
            break;
            ans = false;
        }
    }

    if(ans == true){
        cout << s << " " << e << endl;
    }else {
        cout << "No number"<< endl;
    }

    return 0;
}