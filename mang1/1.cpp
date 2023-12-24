
#include <iostream>
#include <vector>

using namespace std;

bool isIncreasingArray(vector<long long>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isIncreasing = isIncreasingArray(arr);
    if (isIncreasing) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
