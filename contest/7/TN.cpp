#include <iostream>
#include <fstream>

using namespace std;


long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    ifstream cin("TN.INP");
    ofstream cout("TN.OUT");
    long long x1, x2;
    cin >> x1 >> x2;
    long long a = lcm(x1, x2);
    long long b = a;
    long long e = a / x1;
    long long f = a / x2;
    cout << b << endl;
    cout << e << " " << f;
    return 0;
}
