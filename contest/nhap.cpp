#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string s[n];
    cin.ignore();
    for (int i = 0; i < n; ++i) getline(cin, s[i]);
    char c[q];
    for (int i = 0; i < q; ++i) cin >> c[i];
    int d[n][26] = {0}; 
    for (int i = 0; i < n; ++i) {
        for (char ch : s[i]) d[i][ch - 'a']++; 
    }

    int r[q] = {0}; 
    for (int i = 0; i < q; ++i) {
        for (int j = 0; j < n; ++j) {
            if (d[j][c[i] - 'a'] > 0) r[i]++;
            
        }
    }

    for (int i = 0; i < q; ++i) {
        cout << n - r[i] << endl;
    }

    return 0;
}
