#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
       ifstream cin("CHUOI.INP");
    ofstream cout("CHUOI.OUT");
    int n, k;
    char c;
    int f[26] = {0}; 
    cin >> n >> k;
    while (n--) {
        cin >> c;
        f[c - 'A']++; 
    }
    for (int i = 0; i < 26; i++) if (f[i] >= k) cout << char(i + 'A'); 
        
    
    return 0;
}
