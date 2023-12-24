#include <iostream>

int main() {
    int N;
    std::cin >> N;
    if (N % 2 == 0 && N % 3 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
