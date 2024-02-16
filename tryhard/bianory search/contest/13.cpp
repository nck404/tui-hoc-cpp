#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[100005], d = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a , a + n);
    for (int i = 1; i <= n; i++) if (d <= a[i]) d++;
    cout << d;
}
