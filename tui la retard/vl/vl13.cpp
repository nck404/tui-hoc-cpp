
#include <iostream>
#include <cmath>

using namespace std;


bool SHH(long long num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    long long n;
    cin >> n;

    if (SHH(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

