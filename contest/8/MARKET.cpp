#include <iostream>
#include <fstream>
#include <math.h>
#include <set>
using namespace std;


long long max_n = 10e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
    ifstream cin("MARKET.INP");
    ofstream cout("MARKET.OUT");
    long long n,k;
    cin >> n >> k; 
    long long w[n],v[n];
      set<int> sp;
    for (int i = 0; i < n; ++i) 
    {
        cin >> w[i] >> v[i];
    }
    
    cout << sp.size() << endl;
    return 0;
}
