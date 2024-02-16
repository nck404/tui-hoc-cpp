#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    pair<int, int> A[n];
    int B[m];
    for (int i = 0; i < n; i++) {
        cin >> A[i].first;
        A[i].second = i + 1; 
    }
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
    sort(A, A + n);

    for (int i = 0; i < m; i++) {
        int p = lower_bound(A, A + n, make_pair(B[i], 0)) - A;
        cout << (p != n && A[p].first == B[i] ? A[p].second : 0) << " ";
    }

    return 0;
}
