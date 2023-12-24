#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;
    for (int i = 1; i <= abs(n); i++) {
        if (abs(n) % i == 0) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
