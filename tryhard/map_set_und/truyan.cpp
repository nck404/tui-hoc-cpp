#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    set<int> s;
    map<int, int> m;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        s.insert(A[i]);
        m[A[i]]++;
    }

    int Q;
    int X;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> X;
        if (s.find(X) != s.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }



    }
    return 0;
}
