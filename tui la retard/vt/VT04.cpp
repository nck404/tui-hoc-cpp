#include <iostream>

using namespace std;
int main() {
    int n,x,k;
    cin >> n >> x;
    k = false;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == x) {
            k ++;
        }
    }

    cout << k;

    return 0;
}

