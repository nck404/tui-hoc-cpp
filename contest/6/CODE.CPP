#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream inf("CODE.INP");ofstream ouf("CODE.OUT");
    long long n;inf >> n;
    long long a[n]; for (long long  i = 0; i < n; ++i) inf >> a[i];
    vector<bool> t(n + 1, false);
    for (auto num : a) if (num >= 1 && num <= n) t[num] = true;
    long long p = 1;
    for (int i = 1; i <= n; ++i) 
        if (!t[i]) {
            p = i;
            break;
        }
    ouf << p;
    return 0;
}