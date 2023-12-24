#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int Q;
    cin >> Q;

    set<int> unique_values;
    multiset<int> all_values;

    for (int i = 0; i < N; ++i) {
        unique_values.insert(A[i]);
        all_values.insert(A[i]);
    }

    for (int q = 0; q < Q; ++q) {
        int operation;
        cin >> operation;

        if (operation == 1) {
            int X;
            cin >> X;

            unique_values.insert(X);
            all_values.insert(X);
        } else if (operation == 2) {
            int X;
            cin >> X;

            unique_values.erase(X);
            all_values.erase(X);
        } else if (operation == 3) {
            cout << *unique_values.begin() << endl;
        } else if (operation == 4) {
            cout << *unique_values.rbegin() << endl;
        }
    }

    return 0;
}
