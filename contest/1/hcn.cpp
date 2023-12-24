#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    double n1, n2;
    cin >> n1 >> n2;

    double dientich = n1 * n2;
    int gcds = gcd(static_cast<int>(n1), static_cast<int>(n2));
    int b = gcds * gcds;
    int a = static_cast<int>(dientich / b);

    cout << a << " " << b << endl;

    return 0;
}