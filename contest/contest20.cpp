#include <iostream>
#include <cmath>
using namespace std;


bool snt(long long number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n,d,i;
    i = 2;
    cin >> n;
    d = 0 ;
    while (n >= 0) {
        i = i + 1;;
        if (snt(i) == true) {
            d++;
            n = n - i;
        }
    }
    cout << d;

    while (n >= 0) {
        i = i + 1;;
        if (snt(i) == true) {
            d++;
            n = n - i;
            cout << i << " ";
        }
    }
    return 0;
}

