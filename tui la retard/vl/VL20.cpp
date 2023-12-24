#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char a, b;

    cin >> a >> b;

    a =  toupper(a);
    b =  toupper(b);
    for (char c = a; c <= b; c++) {
        if (isupper(c)) {
            cout << c << " ";
        }
    }

    return 0;
}
