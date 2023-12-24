/*#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l - 1; i <= r - 1; i++) {
            sum += A[i];
        }
        cout << sum << endl;
    }

    return 0;
}

*\


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int Q;
    cin >> Q;

    long long fixSum[N];
    prefixSum[0] = A[0];
    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    while (Q--) {
        int l, r;
        cin >> l >> r;

        if (l == 1) {
            cout << fixSum[r - 1] << endl;
        } else {
            cout << fixSum[r - 1] - prefixSum[l - 2] << endl;
        }
    }

    return 0;
}
