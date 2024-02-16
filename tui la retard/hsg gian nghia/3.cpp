#include <iostream>
#include <vector>
using namespace std;

int main() {

    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long m = 0;
    long long x = 0;
    long long s = 0;

    for (long long i = 0; i < n; ++i) {
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
        cout << m-1<< endl;
    }

    return 0;
}
