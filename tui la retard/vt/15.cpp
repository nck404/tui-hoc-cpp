#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long p1 = static_cast<long long>(a[n - 1]) * a[n - 2] * a[n - 3];
    long long p2 = static_cast<long long>(a[0]) * a[1] * a[n - 1];
    if (p1 > p2) {
        cout << p1 << endl;
    } else {
        cout << p2 << endl;
    }
    return 0;
}
