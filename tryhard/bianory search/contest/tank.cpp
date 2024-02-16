#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
long long M, n,a[100005],s[100005];
bool ches(long long g) {
    for (long long i = g; i <= n; ++i) {
        if (s[i-1] - s[i - g] >= M) {
            return true;
        }     
    }
    return false;
}
int main() {
    ifstream inf("TANK.INP");
    ofstream ouf("TANK.OUT");
    inf >> M >> n;
    for (long long i = 0; i < n; ++i) inf >> a[i];
    for (long long i = 1; i <= n; ++i) s[i] = s[i - 1] + a[i];
    long long l = 1, r = n, rs = 1;
    while (l <= r) {
        long long g = (l + r) / 2;
        if (ches(g)) {
            rs = g;
            r = g - 1;
        } else l = g + 1;
    }
    ouf << rs;
    inf.close();ouf.close();
    return 0;
}
