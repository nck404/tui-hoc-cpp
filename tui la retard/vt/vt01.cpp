#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,tam;
    cin >> n;
    long long A[n];
    for (int i = 0 ; i< n ; i++) {
        cin >> A[i];
    }
    tam =A[1];
    for (int i = 0 ; i< n ; i++) {
        if (tam <= A[i]) {
            tam=A[i];
        };
    }
    cout << tam << endl;
    return 0;
}

