
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSoFar = arr[0];
    cout << maxSoFar << " ";

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxSoFar) {
            cout << arr[i] << " ";
            maxSoFar = arr[i];
        }
    }

    return 0;
}
