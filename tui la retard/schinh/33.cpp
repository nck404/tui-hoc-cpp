#include <iostream>
#include <string>
using namespace std;

bool ifb(string N) {
    if (N == string(N.rbegin(), N.rend()) && N.find('6') != string::npos) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string N;
    cin >> N;

    if (ifb(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
