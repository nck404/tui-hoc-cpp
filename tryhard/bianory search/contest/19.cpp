#include <iostream>
#include <algorithm>

#define LL long long

using namespace std;

int main() {
    LL n, x;
    cin >> n >> x;

    pair<LL, LL> a[n];
    for (LL i = 0; i < n; i++) {
        LL tam;
        cin >> tam;
        a[i] = make_pair(tam, i + 1);
    }

    stable_sort(a, a + n);



    LL d[2] = {0, 0};
    LL L = 0, R = n - 1;

    while (L < R) {
        LL s = a[L].first + a[R].first;

        if (s == x) {
            d[0] = a[L].second;
            d[1] = a[R].second;
            break;
        } else if (s > x) {
            R--;
        } else {
            L++;
        }
    }

    if (d[0] != 0) {
        sort(d, d + 2);
        for (int i = 0; i < 2; ++i) {
            cout << d[i] << " ";
        }
    } else {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
