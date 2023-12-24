#include <iostream>
#include <string>
using namespace std;

string isDivisibleBy4(string N) {
    if (N.size() == 1) {
        if (N == "4" || N == "8") return "YES";
        else return "NO";
    } else {
        int lastTwoDigits = stoi(N.substr(N.size() - 2));
        if (lastTwoDigits % 4 == 0) return "YES";
        else return "NO";
    }
}

int main() {
    string N;
    cin >> N;
    cout << isDivisibleBy4(N) << endl;
    return 0;
}
