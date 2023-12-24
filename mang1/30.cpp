#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    std::sort(A.begin(), A.end());
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < K; i++) {
        sum1 += A[i];
    }
    for (int i = K; i < N; i++) {
        sum2 += A[i];
    }

    long long result = sum2 - sum1;
    std::cout << result << std::endl;

    return 0;
}
