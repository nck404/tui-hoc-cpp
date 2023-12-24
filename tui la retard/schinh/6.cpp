#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);
    set<char> result1;
    set<char> result2;
    for (char c : S1) {
        if (S2.find(c) == string::npos) {
            result1.insert(c);
        }
    }
    for (char c : S2) {
        if (S1.find(c) == string::npos) {
            result2.insert(c);
        }
    }
    for (char c : result1) {
        cout << c ;
    }
    cout << endl;
    for (char c : result2) {
        cout << c ;
    }
    cout << endl;
    return 0;
}
