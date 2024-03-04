#include <iostream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream cin("TONG.INP");
    ofstream cout("TONG.OUT");
    long long n ,tam,tongtam,tongdoan,ms,ns;cin >> n;
    long long a[n+1];
    for (int i = 0; i < n; ++i) cin >> a[i];
    tongdoan = a[0];
    tongtam = a[0];
    ns = 0;
    ms = 0;
    tam = 0;
    for (int i = 1; i < n; i++) {
        if (tongtam < 0) {
            tongtam = 0;
            tam = i;
        }
        tongtam += a[i];
        if (tongtam > tongdoan) {
            tongdoan = tongtam;
            ns = tam;
            ms = i;
        }
    }

    return 0;
}