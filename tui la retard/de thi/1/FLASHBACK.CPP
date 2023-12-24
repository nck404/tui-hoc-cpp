#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

long long sl(long long n, long long k) {
    vector<long long> lg(k + 1, 0);
    lg[1] = n; 
    for (long long i = 1; i <= k; ++i) {
        for (long long j = 1; j <= i; ++j) {
            lg[i] = (lg[i] + lg[j]) % MOD;
        }
    }
    return lg[k];
}

int main() {
    ifstream inf("FLASHBACK.INP");
    ofstream ouf("FLASHBACK.OUT");

    long long n, k;
    inf >> n >> k;

    long long kq = sl(n, k);
    ouf << kq + n<< endl;

    inf.close();
    ouf.close();

    return 0;
}
