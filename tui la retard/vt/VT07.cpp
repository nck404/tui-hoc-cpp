#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(10);

    // Nhập 10 số đầu tiên vào mảng
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }

    int num11;
    std::cin >> num11;

    bool found = false;
    std::vector<int> positions;

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == num11) {
            found = true;
            positions.push_back(i + 1);
        }
    }

    if (found) {

        for (int i = 0; i < positions.size(); i++) {
            std::cout << positions[i] << " ";
        }
    } else {

        std::cout << "-1";
    }

    return 0;
}
