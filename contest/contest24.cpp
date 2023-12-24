
#include <iostream>
using namespace std;

int giaithua(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int gcd_giaithua = gcd(giaithua(a), giaithua(b));

    cout << gcd_giaithua << endl;

    return 0;
}
