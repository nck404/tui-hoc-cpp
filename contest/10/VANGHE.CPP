#include <iostream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
const long long Max_N = 1e15+5;

int  main() {
    ifstream cin("VANGNGHE.INP");
    ofstream cout("VANGNGHE.OUT");
    long long n,m,a,m2,n2;
    cin >> n >> m;
    m2 = m;n2 = n;
    a = __gcd(n,m);
    cout << a << endl;
    cout << n2/a << " " << m2/a;
    return 0;
}
