#include <iostream>
#include <vector>

using namespace std;

void transformArray(vector<long long>& arr) {
    int n = arr.size();

    for (long long i = 1; i < n; i += 2) {
        int left = (i - 1 >= 0) ? arr[i - 1] : 0;
        int right = (i + 1 < n) ? arr[i + 1] : 0;

        int di = abs(right - left);
        arr[i] += di;
    }
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    transformArray(arr);

    for (long long i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
