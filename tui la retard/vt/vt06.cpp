#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {


    long long n,t;


    float cut;
    cin >> n;
    int A[n];
    t = 0;
    for (int i = 0 ; i< n ; i++) {
        cin >> A[i];
        if (A[i] % 2 != 0) {
            t+=A[i];
            cut ++;
        };
    }

    cout <<fixed<<setprecision(4) << static_cast<float> (t/cut) << endl;

    return 0;
}
