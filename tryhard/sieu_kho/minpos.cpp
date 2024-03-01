#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];


    int t = min_element(a.begin(), a.end()) - a.begin();

    for (int i = t + 1; i < n; ++i) {
        a[i] = a[t];
    }
    
    cin >> q;
    vector<long long> kq(q);
    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;
        int l = 0, r = n - 1, pos = n;
        while (l <= r) {
            long long m = (l + r) / 2;
            if (a[m] <= x) {
                pos = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        kq[i] = pos + 1;
    }
    for (int i = 0; i < q; ++i) {
        cout << kq[i] << endl;
    }
    return 0;
}
