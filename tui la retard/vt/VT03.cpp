#include <iostream>

#include <climits>

using namespace std;
int main() {
    int n,idx;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= maxIndex) {
            maxIndex = arr[i];
            idx = i;
        }
    }

    cout << idx << endl;

    return 0;
}
