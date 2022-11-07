#include <iostream>
using namespace std;

int reverse_d(int n){
    int r=0;
    while(n>=1){
        int lastdigit = n%10;
        r = r*10 + lastdigit;
        n/=10;
    }
    return r;
}

int c_to_d(int n){
    int r = reverse_d(n);
    int ans=0;
    while(r>=1){
        int lastdigit = r%10;
        ans = ans*2 + lastdigit;
        r/=10;
    }

    return ans;
}

int c_to_b(int n){
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

int add(int a, int b){
    int x = c_to_d(a);
    int y = c_to_d(b);
    int sum = c_to_b(x + y);
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << add(a, b)<< endl;

    return 0;
}