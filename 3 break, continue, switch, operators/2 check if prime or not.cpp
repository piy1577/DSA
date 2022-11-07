#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (int div =2;div< n;div++){
        if (n%div ==0){
            std::cout << "not prime"<< std::endl;
            break;
        }else if (div == n-1){
            std::cout << "prime\n";
        }
    }

    return 0;
}