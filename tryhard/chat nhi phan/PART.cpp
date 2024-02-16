#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(const vector<int>& a, int k, int x) {
    int d = 0;
    for (int i = 0; i < a.size(); ++i) {
        d += a[i] / x;
    }
    return d >= k;
}
int m(const vector<int>& a, int k) {
    int le = 1, ri = *max_element(a.begin(), a.end());
    int r = 0;
    while (le <= ri) {
        int mid = le + (ri - le) / 2;
        if (check(a, k, mid)) {
            r = mid;
            le = mid + 1;
        } else {
            ri = mid - 1;
        }
    }

    return r;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << m(a, k)<< endl;
    return 0;
}
