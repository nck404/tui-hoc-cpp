#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;

    int sum = 0;

    for (char digit : number) {
        sum += digit - '0';
    }

    cout << sum << endl;

    return 0;
}
