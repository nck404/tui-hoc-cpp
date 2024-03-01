#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inf("CAKE.INP");
    ofstream ouf("CAKE.OUT");
    
    long long n;
    inf >> n;
    string s;
    inf >> s;

    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'D') a++;
        else b++;

        if (a == b) {
            
        }
        
    }

    ouf << -1 << endl;
    return 0;
}
