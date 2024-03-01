#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
int ino(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) dp[i][i] = 1;
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                if (len == 2) dp[i][j] = 2;
                else if (dp[i + 1][j - 1] > 0) dp[i][j] = dp[i + 1][j - 1] + 2;
                
            }
            dp[i][j] = max(dp[i][j], max(dp[i + 1][j], dp[i][j - 1]));
        }
    }

    return dp[0][n - 1];
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream inf("XAUDX.INP");ofstream ouf("XAUDX.OUT");
    string s;inf >> s;
    ouf << ino(s) ;
    return 0;
}
