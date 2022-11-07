#include <iostream>
using namespace std;

int convert(int n){
    int r=0;
    int i=0;
    int ans=0;
    while(n>0){
        int first_digit = n%2;
        r = r*10 + first_digit;
        n/=2;
        i++;
    }

    for(int j=0;j<i;j++){
        int lastdigit = r%2;
        ans = ans*10 + lastdigit;
        r/=2;
    }
    return ans;
}


int main() {
    int n;
    cin>> n;

    cout << convert(n)<< endl;

    return 0;
}