#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());

    vector<int> result(n * 2);

    int i = 0, j = 0;
    for (int k = 0; k < n * 2; k++) {
        if (k % 2 == 0) {
            result[k] = A[i++];
        } else {
            result[k] = B[j++];
        }
    }

    for (int k = 0; k < n * 2; k++) {
        cout << result[k] << " ";
    }
    cout << endl;

    return 0;
}

