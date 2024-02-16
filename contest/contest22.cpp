#include <iostream>
#include <algorithm>
using namespace std;

int tam(int arr[], int n, int k) {
    int tam = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; ++i) {
        int t = k - arr[i];

        int l = lower_bound(arr + i + 1, arr + n, t) - arr;
        int r = upper_bound(arr + i + 1, arr + n, t) - arr;

        tam += r - l;
    }

    return tam;
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << tam(arr, n, k) << endl;

    return 0;
}
