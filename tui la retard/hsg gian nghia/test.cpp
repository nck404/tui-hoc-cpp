#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = 0;
    int x = 0;
    int s = 0;

    for (int i = 0; i < n; ++i) {
        s += a[i];
        x++;
        while (s > k && x > 0) {
            s -= a[i - x + 1];
            x--;
        }
        if (x > m) {
            m = x;
        }
    }

    if (m == 0) {
        cout << -1 << endl;
    } else {
        cout << m-1 << endl;
    }



    return 0;
}
