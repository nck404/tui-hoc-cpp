#include <iostream>
#include <string>

using namespace std;

string reverseNumber(string n) {
    string reversed = "";
    for (long long i = n.length()-1; i >= 0; i--) {
        reversed += n[i];
    }
    return reversed;
}

int main() {
    string n;
    cin >> n;

    string reversed = reverseNumber(n);

    cout << reversed;

    return 0;
}
