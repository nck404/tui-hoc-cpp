#include <iostream>
using namespace std;

long long cl(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += static_cast<long long>(i) * i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    long long sum = cl(n);

    cout <<sum << endl;

    return 0;
}
