#include <iostream>
#include <fstream>
#include <math.h>
#include <set>
using namespace std;


long long max_n = 10e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
    ifstream cin("COUNT.INP");
    ofstream cout("COUNT.OUT");
    long long n;
    cin >> n; long long S[n];
      set<int> sp;
    for (int i = 0; i < n; ++i) 
    {
        cin >> S[i];
          sp.insert(S[i]);
    }
    cout << sp.size() << endl;
    return 0;
}
