#include <iostream>
#include <algorithm>
using namespace std;

int bs(int a[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) {
            return m;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int ub(int a[], int n, int k) {
    int dem = 0;

    sort(a, a + n);

    for (int i = 0; i < n; ++i) {
        int tl = k - a[i];
        int fi = bs(a, i + 1, n - 1, tl);
        int si = bs(a, i + 1, n - 1, tl + 1) - 1;
        if (fi != -1 && si != -1) {
            dem += (si - fi + 1);
        }
    }

    return abs(dem);
}



int main() {
    int n, k;
    
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];
    

    cout << ub(a, n, k) << endl;

    return 0;
}
