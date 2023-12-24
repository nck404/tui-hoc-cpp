#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> A(N);
    std::vector<int> B(M);

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        std::cin >> B[i];
    }

    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] == B[j]) {
            j++;
        }
        i++;
    }

    if (j == M) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

