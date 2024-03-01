#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
    ifstream inf("SUM.INP");
    ofstream ouf("SUM.OUT");
    int n, k;
    inf >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        inf >> a[i];
    }

    sort(a.begin(), a.end());

    int d = 0;
    for (int i = 0; i < n; ++i) {
     
        auto first = lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
        auto last = upper_bound(a.begin() + i + 1, a.end(), k - a[i]);
        d += distance(first, last);
    }

    ouf << d << endl;

    return 0;
}
