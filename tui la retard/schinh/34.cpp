#include <iostream>
#include <string>
using namespace std;
bool isBeautifulNumber(string N) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < N.length(); i++) {
        if (N[i] < N[i - 1]) {
            increasing = false;
        }
        if (N[i] > N[i - 1]) {
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    string N;
    cin >> N;

    if (isBeautifulNumber(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
