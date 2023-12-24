#include <iostream>
using namespace std;

bool isDivisibleBy11(string N) {
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < N.length(); i++) {
        if (i % 2 == 0) {
            even_sum += N[i] - '0';
        } else {
            odd_sum += N[i] - '0';
        }
    }

    int diff = abs(even_sum - odd_sum);

    return (diff % 11 == 0);
}

int main() {
    string N;
    cin >> N;

    if (isDivisibleBy11(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
