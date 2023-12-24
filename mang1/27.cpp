#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, d;
    cin >> N >> d;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long go = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] <= A[i - 1]) {
            long long anhba = A[i - 1] - A[i] + 1;
            long long moves = (anhba + d - 1) / d;
            go += moves;
            A[i] += moves * d;
        }
    }
    cout << go << endl;

    return 0;
}
