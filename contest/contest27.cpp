
#include <iostream>
using namespace std;

long long idk(long long N) {
    long long sum = 0;
    long long temp = N;
    while (temp != 0) {
        long long dc = temp % 10;
        sum += dc;
        temp /= 10;
    }
    return sum;
}

int main() {
    long long N,k;
    cin >> N;

    k = N;
    while (k > 10 ) {

        N = idk(N);
        k /= 10;
    }

    cout <<  idk(N) << endl;

    return 0;
}
