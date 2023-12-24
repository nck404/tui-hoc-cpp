#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result;
    string current;

    for (char c : s) {
        if (current.empty() || c == current.back()) {
            current += c;
        } else {
            current = c;
        }

        if (current.length() > result.length() || (current.length() == result.length() && current > result)) {
            result = current;
        }
    }

    cout << result << endl;

    return 0;
}
