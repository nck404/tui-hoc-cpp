#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;



bool anal(string s) {
        map<char, int> fr;
        for (char c : s) {
            fr[c]++;
        }
        int chan = 0;
        for (const auto& entry : fr) {
            if (entry.second % 2 != 0) {
                chan++;
            }
        }
        if (chan <= 1) {
            return true;
        } else {
            return false;
        }
}


int main() {
    string s;
    getline(cin,s);

    if (anal(s)) {
        cout << "YES";
    } else {

        cout << "NO";
    }
    return 0;
}