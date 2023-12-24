#include <iostream>
const int MOD = 1000000007;
using namespace std;

int main() {
    long long n, d;
    d = 0;
    cin >> n;
    while (n > 0) {
        n /= 5;
        d = (d + n) % MOD;
    }

    cout << d << endl;

    return 0;
}
