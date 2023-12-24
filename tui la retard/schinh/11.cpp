#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> splitWords(const string& s) {
    vector<string> words;
    string word;
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}
int main() {
    string s;
    getline(cin, s);
    vector<string> words = splitWords(s);
    sort(words.begin(), words.end());
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;

    return 0;   
}
