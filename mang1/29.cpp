#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long num1 = 0, num2 = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + A[i];
        } else {
            num2 = num2 * 10 + A[i];
        }
    }
    long long sum = num1 + num2;
    cout << sum << endl;
    return 0;
}
