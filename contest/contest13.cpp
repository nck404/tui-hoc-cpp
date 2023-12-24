#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = 1;
    long long b = 2 * static_cast<long long>(n) - 1;

    long long sum = (n / 2) * (a + b);

    cout << sum << endl;

    return 0;
}
