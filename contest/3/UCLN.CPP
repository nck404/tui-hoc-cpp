#include <iostream>
#include <fstream>
using namespace std;

long long ucln(long long x, long long y) {
    while (y != 0) {
        long long tam = x % y;
        x = y;
        y = tam;
    }
    return x;
}

int main() {
    ifstream inf("UCLN.INP");
    ofstream ouf("UCLN.OUT");
    
    long long a, b, c;
    inf >> a >> b >> c;

    long long ucln_ab = ucln(a, b);

    if (ucln_ab == c) {
        ouf << 1;
    } else {
        ouf << 0;
    }    
    return 0;
}
