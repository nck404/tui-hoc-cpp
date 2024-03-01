#include <iostream>
#include <vector>

using namespace std;

int ls(vector<int>& a, int t) {
    int n = a.size();
    int m = 0;
    int sum = 0;
    int l = 0;
    for (int r = 0; r < n; ++r) {
        sum += a[r];
        while (sum > t) {
            sum -= a[l];
            l++;
        }
        if (sum == t) m = max(m, r - l + 1);
    }

    return m;
}

int main() {
    int n, k, tong , d ,s , m ,l;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> s; 
    cout << ls(a,s);
    return 0;
}
