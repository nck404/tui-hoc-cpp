#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream inf("CHIAQUA.INP");ofstream ouf("CHIAQUA.OUT");
    long long s,t;inf >> s;
    t = 0;
    for (long long i = 0; i < s; ++i) {
        long long w;
        inf >> w;
        t += w;
    }
    return 0;
}
