#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    pair<ll, ll> a[n];

    for (ll i = 0; i < n; ++i) {
        ll tam;
        cin >> tam;
        a[i] = {tam, i + 1};
    }

    stable_sort(a, a + n);

    for (ll i = 0; i < n - 3; ++i) {
        for (ll j = i + 1; j < n - 2; ++j) {
            ll l = j + 1, r = n - 1;
            while (l < r) {
                ll t = a[i].first + a[j].first + a[l].first + a[r].first;
                if (t == k) {
                    cout << a[i].second << " " << a[j].second << " "
                         << a[l].second << " " << a[r].second << endl;
                    return 0;
                } else if (t < k) {
                    ++l;
                } else {
                    --r;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
