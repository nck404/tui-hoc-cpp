#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("MARKET.INP");
    ofstream fout("MARKET.OUT");
    int n, M;
    fin >> n >> M;
    vector<int> W(n+1), V(n+1);
    for (int i = 1; i <= n; ++i) fin >> W[i] >> V[i];
    vector<vector<int>> dp(n+1, vector<int>(M+1, 0));
    for (int i = 1; i <= n; ++i) 
        for (int j = 1; j <= M; ++j) {
            if (W[i] <= j) dp[i][j] = max(dp[i-1][j], dp[i-1][j - W[i]] + V[i]);
            else  dp[i][j] = dp[i-1][j];
        }
    
    int p = dp[n][M];
    if (p == 0) fout << -1 << endl; else fout << p << endl;
    

    return 0;
}
