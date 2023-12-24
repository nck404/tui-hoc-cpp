#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);

    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int L, R;
    cin >> L >> R;

    reverse(V.begin(), V.end());
    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    reverse(V.begin() + L, V.begin() + R + 1);
    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}
