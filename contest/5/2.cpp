#include <iostream>
#include <fstream>
#include <vector>
#include <set>
using namespace std;
bool cn(long long n) {
    long long tam = n;
    while (tam != 0) {
        long long e = tam % 10;
        if (e == 0 || n % e != 0) return false;
        tam /= 10;
    }
    return true;
}
int main() {
    ifstream inf("CHECK.INP");ofstream ouf("CHECK.OUT");
    long long N;
    inf >> N;
    vector<long long> b(N);
    for (long long i = 0; i < N; ++i) inf >> b[i];
    set<long long> a;
    for (long long i = 0; i < N; ++i) if (cn(b[i])) a.insert(b[i]);
    ouf << a.size() << endl;
    for (long long n : a) ouf << n << " ";
    inf.close();ouf.close();
    return 0;
}