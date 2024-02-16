#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    sort(A, A + n);

    int L = A[0];
    int R = A[n - 1];

    unordered_set<int> set_A(A, A + n);

    int mat = 0;
    for (int i = L; i < R; ++i) {
        if (set_A.find(i) == set_A.end()) {
            mat++;
        }
    }

    cout << mat << endl;

    return 0;
}
