#include <iostream>
#include <fstream>
using namespace std;
long long giaithua(int n) {
    long long res = 1;
    for (int i = n; i > 0; i -= 2) {
        res *= i;
    }
    return res;
}
int main() {
    ifstream inf("FADOUBLE.INP");ofstream ouf("FADOUBLE.OUT");
    long long n;
    inf >> n;
    long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (i % 2 == 0) ? -giaithua(i) : giaithua(i);
    }
    ouf << sum ;
    inf.close();ouf.close();
    return 0;
}