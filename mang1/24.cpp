
#include <iostream>
using namespace std;

int main() {
    int n,target;
    cin >> n >> target;

    int arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int first = -1;
    int last = -1;

    for (int i = 1; i <= n; i++) {
        if (arr[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    cout << first << " " <<  last;

    return 0;
}
