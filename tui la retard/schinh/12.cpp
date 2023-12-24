#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    vector<string> wordsList;
    map<string, int> wordFrequency;
    while (ss >> word) {
        wordsList.push_back(word);
        wordFrequency[word]++;
    }


    for (const auto& pair : wordFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }

    cout << endl;

    for (const string& word : wordsList) {
        if (wordFrequency.find(word) != wordFrequency.end()) {
            cout << word << " " << wordFrequency[word] << endl;
            wordFrequency.erase(word);
        }
    }

    return 0;
}
