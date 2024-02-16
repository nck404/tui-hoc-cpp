#include <iostream>
#include <algorithm>
using namespace std;

int bs(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            return m;
        } else if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

// int ub(int arr[], int n, int k) {
//     int dem = 0;

//     sort(arr, arr + n);

//     for (int i = 0; i < n; ++i) {
//         int tl = k - arr[i];

//         int fi = bs(arr, i + 1, n - 1, tl);
//         int si = bs(arr, i + 1, n - 1, tl + 1) - 1;

 
//         if (fi != -1 && si != -1) {
//             dem += (si - fi + 1);
//         }
//     }

//     return dem;
// }

int ub()

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << ub(arr, n, k) << endl;

    return 0;
}
