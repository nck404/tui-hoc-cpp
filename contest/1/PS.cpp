#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
void toi_gian_ps(int &tu, int &mau) {
    int mauchung = gcd(tu, mau);
    tu /= mauchung;
    mau /= mauchung;
}
void inps(int tu, int mau) {
    cout << tu << "/" << mau;
}

int main() {
    int tu1, mau1, tu2, mau2;
    cin >> tu1 >> mau1;
    cin >> tu2 >> mau2;
    int commonmau = lcm(mau1, mau2);
    cout << commonmau << endl;

    int newtu1 = tu1 * (commonmau / mau1);
    int newtu2 = tu2 * (commonmau / mau2);
    inps(newtu1,commonmau);
    cout << " "; inps(newtu2,commonmau);
    cout << endl;
    int sumtu = newtu1 + newtu2;
    toi_gian_ps(sumtu, commonmau);
   inps(sumtu, commonmau);

    return 0;
}
