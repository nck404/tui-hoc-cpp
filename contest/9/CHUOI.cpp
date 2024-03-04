#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ifstream cin("CHUOI.INP");
    ofstream cout("CHUOI.OUT");
    long long m, n;
    cin >> m >> n;
    cout << gcd(m, n);
    return 0;
}
