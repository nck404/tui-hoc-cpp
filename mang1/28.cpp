#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long long result = 0;
    for (int i = 0; i < N; i++) {
        result = (result + (1LL * A[i] * i)) % MOD;
    }
    cout << result << endl;
    return 0;
}



/*

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5+1;
const ll modular = 1e9+7;
ll n, a[N], sum = 0;
int main() {
    cin >> n;
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (ll i = 0; i < n; i++) sum += (a[i] * i) % modular;
    cout << sum % modular;
    return 0;
}
*/
