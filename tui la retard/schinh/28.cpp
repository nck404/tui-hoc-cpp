#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    string s;
    getline(cin, s);

    vector<string> num;
    string stringso;

    for (char c : s) {
        if (isdigit(c)) {
            stringso += c;
        } else if (!stringso.empty()) {
            num.push_back(stringso);
            stringso.clear();
        }
    }
    if (!stringso.empty()) {
        num.push_back(stringso);
    }
    for (string &n : num) {
        n.erase(0, min(n.find_first_not_of('0'), n.size() - 1));
    }

    sort(num.begin(), num.end(), cmp);
    cout << num.back() << endl; 
    return 0;
}
