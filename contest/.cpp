#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;

    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        long long term = i * i * i;
        sum += term;
    }

    cout <<  sum << endl;

    return 0;
}
