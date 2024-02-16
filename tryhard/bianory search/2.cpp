#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long A[n], B[m];

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    sort(A, A + n);

    for (int i = 0; i < m; ++i) {
        cin >> B[i];
        int p = lower_bound(A, A + n, B[i]) - A;

        if (p < n && A[p] == B[i]) {
            cout << p + 1 << " "; 
        } else {
            cout << "0 ";  
        }
    }

    return 0;
}
