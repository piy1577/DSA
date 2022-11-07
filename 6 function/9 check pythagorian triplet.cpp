#include <iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>c && b>a){
        return b;
    }else {
        return c;
    }
}

int sq(int n){
    int ans = n*n;
    return ans;
}

bool check(int a, int b, int c){
    int h,p,r;
    if(max(a,b,c)==a){
        h=a;
        p=b;
        r=c;
    }else if(max(a,b,c)==b){
        h=b;
        p=a;
        r=c;
    }else{
        h=c;
        p=a;
        r=b;
    }

    if(sq(h) == sq(p)+sq(r)){
        return true;   
    }else {
        return false;
    }
}


int main() {
    int a, b, c;
    cin >>a >> b>> c;

    if(check(a, b, c) == true){
        cout<< "True"<< endl;
    }else {
        cout <<"False"<< endl;
    }

    return 0;
}