#include <bits/stdc++.h>
#include <iostream>
    using namespace std;
int a[100011],
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0] + a[1];
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + a[i + 1] >= max)
        {
            max = a[i] + a[i + 1];
            c = i;
        }
    }
    if (a[n - 1] + a[0] > max)
        cout << a[n - 1] << " " << a[0];
    else
        cout << a[c] << " " << a[c + 1];
}
