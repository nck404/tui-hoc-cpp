
#include <iostream>
using namespace std;

bool pre(long long n) {
    if (n < 1 ) return false
    for (long long i = 0; i <= n; i++) {

        if (n % i == 0) {
            d++;
        }
    }

    if (d == 2) {
        return
    }

}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

