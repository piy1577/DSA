#include <iostream>
using namespace std;

int reverse(int n){
    int r=0;
    while(n>=1){
        int lastdigit = n%10;
        r = r*10 + lastdigit;
        n/=10;
    }
    return r;
}


int conversion(int r){
    int ans=0;
    while(r>=1){
        int lastdigit = r%10;
        ans = ans*2 + lastdigit;
        r/=10;
    }

    return ans;
}

int main(){
    int n;
    cin >>n;

    cout << conversion(reverse(n))<< endl;
    
    return 0;
}