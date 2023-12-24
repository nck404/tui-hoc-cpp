#include <iostream>
#include <vector>


using namespace std;

const int MAXN = 1000001;
int F[1000001];
/*
vector<bool> isPrime(MAXN, true);
vector<int> primeCount(MAXN, 0);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= MAXN; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= MAXN; i += p) {
                isPrime[i] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (isPrime[i]) {
            count++;
        }
        primeCount[i] = count;
    }
}
*/

#include <bits/stdc++.h>
int snt(long long n) {
    for ( long long i = 2; i*i <= n; i++) {
        if (n % i == 0 ) return 0;
    }
    return n>1;
}
int main() {
    // sieve();


    int Q;
    cin >> Q;
     const int MAX_R = 1000000;
        for (int i = 1; i <= MAX_R; i++) {
            F[i] = F[i - 1] + snt(i);
        }
    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << F[R] - F[L - 1] << endl;
    }

    return 0;
}
