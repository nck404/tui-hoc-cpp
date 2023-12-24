#include <iostream>
#include <string>
#include <cctype>
#include <set>

using namespace std;

bool isPangram(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    set<char> charSet;
    for (char c : s) {
        if (isalpha(c) && charSet.find(c) == charSet.end()) {
            charSet.insert(c);
        }
    }
    
    return charSet.size() == 26;
}

int main() {
    string S;
    cin >> S;
    
    if (isPangram(S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
