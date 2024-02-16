#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, ma, s;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];
    
    sort(a,a + n);
    s = 0;
    for (int i = 0; i < n; ++i) {
        ma = 0;
        for (int j = 1; j < n; ++j) {
            if (a[j] > a[ma]) {
                ma = j;
            }
        }
        if (a[ma] == 0) {
            break;
        }
        s += a[ma];
        a[ma] = 0;

        for (int j = 0; j < n; ++j) {
            if (a[j] != 0) {
                --a[j];
            }
        }
    }

    cout <<  s << endl;

    return 0;
}
