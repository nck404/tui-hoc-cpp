
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count25 = 0;
    int count50 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 25) {
            count25++;
        } else if (arr[i] == 50) {
            if (count25 > 0) {
                count25--;
                count50++;
            } else {
                cout << "NO";
                return 0;
            }
        } else if (arr[i] == 100) {
            if (count50 > 0 && count25 > 0) {
                count50--;
                count25--;
            } else if (count25 >= 3) {
                count25 -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}
