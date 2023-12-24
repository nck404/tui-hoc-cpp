#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    set<int> uniqueV;
    vector<int> F(N, 0);
    for (int i = N - 1; i >= 0; i--) {
        uniqueV.insert(A[i]);
        F[i] = uniqueV.size();
    }

    for (int i = 0; i < Q; i++) {
        int L;
        cin >> L;
        cout << F[L] << endl;
    }
    return 0;
}

