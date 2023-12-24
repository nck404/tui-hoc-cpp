#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x;
    cin >> n;

    float sum = 0.0;
    float factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += pow(x, i) / factorial;
    }

    cout <<fixed<<setprecision(2) << sum << endl;

    return 0;
}
