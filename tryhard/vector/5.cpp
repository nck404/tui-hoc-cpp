
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<char> characters(N);


    for (int i = 0; i < N; i++) {
        cin >> characters[i];
    }

    map<char, int> charFreq;
    for (char c : characters) {
        charFreq[c]++;
    }

    char minChar = charFreq.begin()->first;
    int minFreq = charFreq.begin()->second;

    for (const auto &pair : charFreq) {
        if (pair.first < minChar) {
            minChar = pair.first;
            minFreq = pair.second;
        }
    }

    cout << minChar << " " << minFreq << endl;
    cout << endl;
    char maxChar = charFreq.rbegin()->first;
    int maxFreq = charFreq.rbegin()->second;

    for (const auto &pair : charFreq) {
        if (pair.first > maxChar) {
            maxChar = pair.first;
            maxFreq = pair.second;
        }
    }

    cout << maxChar << " " << maxFreq << endl;
     cout << endl;
    set<char> uniqueChars;
    for (char c : characters) {
        uniqueChars.insert(c);
    }

    for (char c : uniqueChars) {
        cout << c << " " << charFreq[c] << endl;
    }


    set<char, greater<char>> reverseUniqueChars(uniqueChars.begin(), uniqueChars.end());
     cout << endl;
    for (char c : reverseUniqueChars) {
        cout << c << " " << charFreq[c] << endl;
    }

    return 0;
}

