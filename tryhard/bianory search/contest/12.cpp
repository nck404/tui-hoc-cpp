#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[100001], B[100001];
    for (int i = 1; i <= n; i++) cin >> A[i];
    for (int i = 1; i <= m; i++) cin >> B[i];
    sort(A + 1, A + n + 1);
    sort(B + 1, B + m + 1);
    int X = 0;
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (A[i] > B[j]) {
            i--;
            j--;
            X++;
        } else {
            j--;
        }
    }
    cout << X << endl;

    return 0;
}
