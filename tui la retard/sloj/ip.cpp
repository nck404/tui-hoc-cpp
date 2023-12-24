#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long minIP = 1;
    for (long long i = 0; i < n; ++i) {
        if (arr[i] == minIP) {
            minIP++;
        } else if (arr[i] > minIP) {
            break;
        }
    }
    cout << minIP << endl;
    return 0;
}

