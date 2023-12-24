#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;


    int num;
    while (true) {
        std::cin >> num;
        if (num == 0) {
            break;
        }
        numbers.push_back(num);
    }

    bool found = false;


    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < 0) {
            std::cout << numbers[i] << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "NOT FOUND";
    }

    return 0;
}
