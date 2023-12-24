#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long  x = 1;
    long sum = 0;

    while (sum < N) {
        sum += x;
        x++;
    }

    x--;

    cout <<x << endl;

    return 0;
}
