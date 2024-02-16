#include <iostream>
#include <algorithm>
using namespace std;
int bs(long long arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int g = l + (r - l) / 2;
        if (arr[g] == x) {
            return 1; 
        } else if (arr[g] < x) {
            l = g + 1;
        } else {
            r = g - 1;
        }
    }

    return 0; 
}
int main() {
    long long n, m,Q,T;
    cin >> n ;

    long long A[n];

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    long long B[m];
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> B[i];
    }
    sort(A, A + n);
    for (int i = 0; i < m; ++i)
    {
        if (bs(A,n,B[i]) == 0 ) cout << "NO" << endl;
        if (bs(A,n,B[i]) == 1 ) cout << "NO" << endl;
    }
    

    return 0;
}
