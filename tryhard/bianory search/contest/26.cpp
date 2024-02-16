#include <iostream>
#include <unordered_set>
using namespace std;

int tam(int arr[], int n, int x) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int t = arr[i] - x;

        if (s.find(t) != s.end()) {
            return 1;
        }

        s.insert(arr[i]);
    }

    return -1;
}

int main() {
    int n, x;
    cin >> n >> x;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << tam(arr, n, x)<< endl;

    return 0;
}
