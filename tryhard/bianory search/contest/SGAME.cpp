#include <bits/stdc++.h>
#include <iostream>
#define LL long long
using namespace std;

LL n, rs = LLONG_MAX; 

int p1(LL i, LL b[], LL c[]) {
    auto it = upper_bound(b + 1, b + n + 1, -c[i]);
    if (it != b + 1) {
        it--;
        return it - b;
    }
    return -1;
}

int p2(LL i, LL b[], LL c[]) {
    auto it = lower_bound(b + 1, b + n + 1, -c[i]);
    if (it != b + n + 1) {
        return it - b;
    }
    return -1;
}

int main() {

    cin >> n;
    LL c[n], b[n];
    for (LL i = 1; i <= n; i++) cin >> b[i];
    for (LL i = 1; i <= n; i++) cin >> c[i];
    sort(b + 1, b + n + 1);

    for (LL i = 1; i <= n; i++) {
        if (p1(i, b, c) != -1)
            rs = min(rs, abs(c[i] + b[p1(i, b, c)]));
        if (p2(i, b, c) != -1)
            rs = min(rs, abs(c[i] + b[p2(i, b, c)]));
    }
    cout << rs;

    return 0;
}
