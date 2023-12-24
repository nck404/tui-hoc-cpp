#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }

    cout <<  fixed << setprecision(5) << sum << endl;

    return 0;
}
