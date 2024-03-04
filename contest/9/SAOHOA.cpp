#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ifstream cin("SAOHOA.INP");
    ofstream cout("SAOHOA.OUT");

    int n, k, p, r = 0;
    cin >> n >> k >> p;
    vector<int> a(n), f(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    // 20 50 100 120 160
    // p[30] + 20 >= 1*20 = 20 => r++
    // p[30] +  50 >= 2*20 = 40 => r++
    // p[30] +  100 < 3*20 = 120 => r*
    f[0] = a[0];
    for (int i = 1; i < n; ++i) f[i] = f[i - 1] + a[i];
    
    for (int t = 1; t < n; t++) 
        if (p + f[t - 1] >= k * t) r++;
    cout << r;
    return 0;
}
    