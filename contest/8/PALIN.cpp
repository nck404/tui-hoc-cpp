#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


long long max_n = 10e9 + 7;
bool solve(string a) {
    string s;
    for(char c : a) s += tolower(c);
    for(size_t i = 0; i < s.length() / 2; ++i) {
        if(s[i] != s[s.length() - i - 1]) return false;
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
    ifstream cin("PALIN.INP");
    ofstream cout("PALIN.OUT");
    long long n;
    cin >> n; string S[n];
    for (int i = 0; i < n; ++i) 
    {
        cin >> S[i];
        cout << (solve(S[i]) ? "YES" : "NO") << endl;
    }

    return 0;
}
