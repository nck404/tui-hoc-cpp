#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<char> k1, k2;

    for (char c : s1) {
        bool timthay2 = false;
        for (char c2 : s2) {
            if (c == c2) {
                timthay2 = true;
                break;
            }
        }
        if (timthay2) {
            k1.insert(c);
        } else {
            k2.insert(c);
        }
    }
    for (char c : s2) {
        bool timthay = false;
        for (char c1 : s1) {
            if (c == c1) {
                timthay = true;
                break;
            }
        }
        if (!timthay) {
            k2.insert(c);
        }
    }
    for (char c : k1) {
        cout << c;
    }
    cout << endl;

    for (char c : k2) {
        cout << c;
    }
    cout << endl;
    return 0;
}
