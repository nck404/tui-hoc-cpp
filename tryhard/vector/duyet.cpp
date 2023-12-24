#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int l,r;
    cin >> l; cin >> r;


    for (int i = l ; i <= r; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = r ; i >= l; i--) {
        cout << v[i] << " ";
    }


    return 0;
}

