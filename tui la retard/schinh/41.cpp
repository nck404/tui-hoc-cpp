#include <iostream>
#include <string>
using namespace std;

bool isDivisibleByPowerOfTwo(string N, int K) {
    int length = N.length();
    for (int i = 0; i < K; i++) {
        if (i >= length) {
            return false;
        }
        if (N[length - 1 - i] != '0') {
            return false;
        }
    }
    return true;
}

int main() {
    string N;
    int K;
    cin >> N >> K;
    if (isDivisibleByPowerOfTwo(N, K)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
