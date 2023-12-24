#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    map<char, int>fr; 
    set<char> uq; 

    for (char c : s) {
           fr[c]++;
           uq.insert(c);
        
    }
    for (char c : uq) {
        cout << c << " " <<fr[c] << endl;
    }



    map<char, int> fr2;

    for (char c : s) {
            fr2[c]++;
    }

    vector<pair<char, int>> frvector;
    for (const auto &entry : fr2) {
        frvector.push_back(entry);
    }

    sort(frvector.begin(), frvector.end(), 
        [](const pair<char, int> &a, const pair<char, int> &b) {
            return a.second > b.second;
        });
    cout << endl;
    for (const auto &entry : frvector) {
        cout << entry.first << " " << entry.second << endl;
    }
    return 0;
}
