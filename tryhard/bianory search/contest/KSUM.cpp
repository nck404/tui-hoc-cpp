#include <iostream>
using namespace std;
long long n,k,a[100005],x;
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> a[i];
    long long tam = 0;
    for (int i = 0; i < k; ++i) x += a[i];
    tam = x;
    for (int i = k; i < n; ++i) {
        x = x - a[i - k] + a[i];
        tam = max(tam, x);
    }
    cout << tam << endl;
}