#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = static_cast<long long>(n) * (n + 1);

    cout  << sum << endl;

    return 0;
}
