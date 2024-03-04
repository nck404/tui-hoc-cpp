#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ifstream cin("XEPHANG.INP");
    ofstream cout("XEPHANG.OUT");

      int n;
        cin >> n;


  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  //sort(a.begin(), a.end());
  long long m = a[n - 1];
  for (int i = 0; i < n - 1; ++i) {
    long long t = a[i] + a[n - 1];
    if (t < m) {
      m = t;
    }
  }

  cout << m << endl;

    return 0;
}
