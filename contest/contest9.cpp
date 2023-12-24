
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long tich = 1;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            tich *= i;
        }
    }

    cout <<  tich << endl;

    return 0;
}
