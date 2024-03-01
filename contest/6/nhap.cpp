#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_map>
using namespace std;
int main() {
    ifstream inf("LUCKY.INP");
    ofstream ouf("LUCKY.OUT");
    int N, K;
    inf >> N >> K;
    unordered_map<int, int> m;
    int t = 0;
    for (int i = 0; i < N; ++i) {
        int num;
        inf >> num;
        int s = K - num;
        if (m.find(s) != m.end()) t += m[s];
        m[num]++;
    }
    ouf << t << endl;
    
    return 0;
}
