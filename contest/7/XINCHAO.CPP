#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool xc(const string& str, const string& substr) {
    return str.find(substr) != string::npos;
}

int main() {
    ifstream cin("XINCHAO.INP");
    ofstream cout("XINCHAO.OUT");

    string t;
    long long n;
    cin >> n >> t;

    string w[n];
    for (long long i = 0; i < n; ++i) {
        cin >> w[i];
        cout << (xc(w[i], t) ? "YES" : "NO") << endl;
    }

    return 0;
}
