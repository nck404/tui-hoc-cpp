#include <iostream>
#include <cmath>
using namespace std;

bool snt(long long number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n, d;

    cin >> n;
    d = 0;
    while (n > 0) {
        long long k = n % 10;
        if (snt(k) == true) {
            d++;
        }
        n /= 10;
    }

    cout << d;
    return 0;
}
