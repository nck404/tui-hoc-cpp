#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
long long max_n = 10e9 + 7;
long long sqr(long long x) {
    return x*x% max_n;
}
long long pow(long long a, long long b) {
    if (b == 0) return 1;
    else if (b % 2 == 0) return sqr(pow(a, b/2))% max_n;
    else return a * (sqr(pow(a, b/2)))% max_n;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
    ifstream cin("SPOW.INP");
    ofstream cout("SPOW.OUT");
    long long a,n,tam;tam=1;
    cin >> a >> n;
    a = a % max_n ; n = n % max_n ;
    cout << a+n << endl;
    cout << pow(a,n) ;
    return 0;
}
