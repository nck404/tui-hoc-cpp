#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    map<char, int> mdanhdau;
    for (char c : s) {
        if (mdanhdau.find(c) != mdanhdau.end()) {
            mdanhdau[c]++;
        } else {
            mdanhdau[c] = 1;
        }
    }
    for (auto it = mdanhdau.begin(); it != mdanhdau.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    set<char> seen;
    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            cout << c << " " << mdanhdau[c] << endl;
            seen.insert(c);
        }
    }
    return 0;
}
