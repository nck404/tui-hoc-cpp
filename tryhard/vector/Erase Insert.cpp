#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M;
    vector<int> v(M);
    for (int i = 0; i < M; i++) {
        cin >> v[i];
    }
    cin >> N;
    for (int i = 0; i < N; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int pos, x;
            cin >> pos >> x;
            if (pos >= 0 && pos <= v.size()) {
                v.insert(v.begin() + pos, x);
            }
        } else if (op == 2) {
            int pos;
            cin >> pos;
            if (pos >= 0 && pos < v.size()) {
                v.erase(v.begin() + pos);
            }
        }
    }

    if (v.empty()) {
        cout << "EMPTY" << endl;
    } else {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
