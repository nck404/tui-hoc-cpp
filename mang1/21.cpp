
#include <iostream>

using namespace std;

int main() {
    int num;
    int evenCount = 0;
    int oddCount = 0;

    while (cin >> num) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if ((evenCount > oddCount && (evenCount + oddCount) % 2 == 0) ||
        (oddCount > evenCount && (evenCount + oddCount) % 2 == 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
