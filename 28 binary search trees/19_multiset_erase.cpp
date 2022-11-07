#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);

    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;

    s.erase(3);

    for(auto i: s){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
