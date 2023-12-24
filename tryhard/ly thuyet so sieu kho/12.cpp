#include <iostream>

using namespace std;

void snts(int n) {
    for (int i = 2; i * i <= n; ++i) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            ++count;
        }
        if (count > 0) {
            cout << i;
            if (count > 0) {
                cout << "^" << count;
            }
            if (n > 0) {
                cout << "*";
            }
        }
    }
    if (n > 1) {
        cout << n << "^1";
    }
}

int main() {
    int N;
    cin >> N;
    snts(N);

    return 0;
}
