
#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void simplifyFraction(int& a, int& b) {
    int gcdValue = gcd(abs(a), abs(b));
    a /= gcdValue;
    b /= gcdValue;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "INVALID" ;
    } else if (a == 0) {
        cout << "0";
    } else {
        simplifyFraction(a, b);
        cout << a << " " << b ;
    }

    return 0;
}
