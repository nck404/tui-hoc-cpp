#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    long long sum = 0;
    long long so = 0;
    bool iin = false;

    for (char c : s) {
        if (isdigit(c)) {
            so = so * 10 + (c - '0');
            iin = true;
        } else {
            if (iin) {
                sum += so;
                so = 0;
                iin = false;
            }
        }
    }
    if (iin) {
        sum += so;
    }

    cout << sum << endl;

    return 0;
}
