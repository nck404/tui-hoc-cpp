#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int term = (-1) * i * (i % 2 == 0 ? 1 : -1);
        sum += term;
    }

    cout  << abs(sum) << endl;

    return 0;
}
