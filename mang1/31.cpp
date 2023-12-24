#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    long long maxPairSum = std::max(std::abs(A[0] + A[1]), std::abs(A[N - 1] + A[N - 2]));

    std::cout << maxPairSum << std::endl;

    return 0;
}
