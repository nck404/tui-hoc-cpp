#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    long long temp = N;

    while (temp != 0) {
        long long dc = temp % 10;
        sum += dc;
        temp /= 10;
    }

    cout <<  sum << endl;

    return 0;
}
