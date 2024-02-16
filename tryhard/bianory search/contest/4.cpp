#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long a[n];
    for (long long i=0; i<n; i++) cin >> a[i];
    stable_sort(a,a+n);
    cout << a[1]-a[0];
}