#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for(auto i: s){
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}