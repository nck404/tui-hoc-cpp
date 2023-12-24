#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "WOW";
            } else {
                cout << "NO";
            }
        } else {
            double x = -c / b;
            cout << fixed << setprecision(2) << x;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta > 0) {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            cout << fixed << setprecision(2) << x1 << " " << x2;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << fixed << setprecision(2) << x;
        } else {
            cout << "NO";
        }
    }

    return 0;
}
