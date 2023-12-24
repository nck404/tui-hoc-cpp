#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i] = A[i] * A[i]; // Bình phương các số trong mảng
    }

    sort(A.begin(), A.end()); // Sắp xếp mảng tăng dần

    bool found = false;

    // Duyệt qua tất cả các cặp số A[i] và A[j]
    for (int i = N - 1; i >= 2; i--) {
        int left = 0;
        int right = i - 1;

        while (left < right) {
            if (A[left] + A[right] == A[i]) {
                found = true;
                break;
            } else if (A[left] + A[right] < A[i]) {
                left++;
            } else {
                right--;
            }
        }

        if (found) {
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
