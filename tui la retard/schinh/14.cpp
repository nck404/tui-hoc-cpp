#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    map<string, int> wordCount;

    while (ss >> word) {
        wordCount[word]++;
    }

    string mostFrequentWord, leastFrequentWord;
    int mostFrequency = -1, leastFrequency = S.length() + 1;
    for (const auto& pair : wordCount) {
        if (pair.second > mostFrequency || (pair.second == mostFrequency && pair.first > mostFrequentWord)) {
            mostFrequentWord = pair.first;
            mostFrequency = pair.second;
        }
        if (pair.second < leastFrequency || (pair.second == leastFrequency && pair.first > leastFrequentWord)) {
            leastFrequentWord = pair.first;
            leastFrequency = pair.second;
        }
    }

    cout << mostFrequentWord << " " << mostFrequency << endl;
    cout << leastFrequentWord << " " << leastFrequency << endl;

    return 0;
}
