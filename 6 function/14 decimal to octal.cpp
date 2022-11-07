#include <iostream>
using namespace std;

int convert(int n){
    int r=0;
    int ans=0;
    int i=0;
    while(n>0){
        int digit = n%8;
        r = r*10 + digit;
        n/=8;
        i++;
    }

    for(int j=0;j<i;j++){
        int lastdigit = r%8;
        ans = ans*10 + lastdigit;
        r/=8;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << convert(n)<<endl;

    return 0;
}