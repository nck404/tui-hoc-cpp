#include <iostream>
#include <bits/stdc++.h>
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
    long long n,m;
    cin >> n >> m;
    long long A[n],B[m];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> B[i];
    }
    for (int i = 0; i < m ;i++) {
        cout << bs(A,n,B[i]);
    }
    return 0;
}
