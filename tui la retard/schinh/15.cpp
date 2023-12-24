#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    getline(cin, S);
    getline(cin, T);


    for (int i = 0; i <= S.length() - T.length(); i++) {
        if (S.substr(i, T.length()) == T) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
