#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "LUISDPHFQJLBFLUISHF";
    transform(s.begin() , s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}