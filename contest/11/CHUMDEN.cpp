#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int cd(vector<int>& a, int n, int k) {
    vector<int> p(n + 1, 0);
    int d = 0;
    for (int i = 1; i <= n; ++i)  p[i] = p[i - 1] + (a[i] % 2);
    for (int i = 0; i <= n - k; ++i) {
        int t = p[i + k] - p[i];
        if (t % 2 != 0) ++d;
    }
    return d;
}

int main() {
    ifstream cin("CHUMDEN.INP");
    ofstream cout("CHUMDEN.OUT");

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << cd(a, n, k) << endl;

    cin.close();
    cout.close();

    return 0;
}
