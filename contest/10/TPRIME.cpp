#include <iostream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int  main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ifstream cin("TPRIME.INP");
    ofstream cout("TPRIME.OUT");
    long long n,d,q; d = 0; cin >> n;
    bool check[n + 1];
    memset(check, true, sizeof(check));
    check[0] = check[1] = false;
    for (long long  i = 2; i * i <= n ; ++i)
    {
        if (check[i])  for (long long  j = i * i; j <= n; j += i) check[j] = false;
        
    }
    for (long long i = 0; i < n; ++i)
    {
         q = sqrt(i);
        if (check[q] && (q*q == i) ) d++;
        
    } 

    cout << d;
    return 0;
}
