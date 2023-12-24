#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string N;
    cin >> N;

    int sum = 0;
    bool allPrime = true;

    for (char digit : N) {
        int num = digit - '0';
        sum += num;
        if (!isPrime(num)) {
            allPrime = false;
            break;
        }
    }

    if (allPrime && isPrime(sum)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
