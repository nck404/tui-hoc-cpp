
#include <iostream>


using namespace std;

double factorial(int n) {
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double calculateS(double x, int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}

int main() {
    double x;
    int n;
    cin >> x >> n;

    double result = calculateS(x, n);
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
