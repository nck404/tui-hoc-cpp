#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long result = 0;
    int prev = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] <= prev) {
            result += prev - A[i] + 1;
            A[i] = prev + 1;
        }
        prev = A[i];
    }

    cout << result << endl;

    return 0;
}

