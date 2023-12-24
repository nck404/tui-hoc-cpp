#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    vector<string> wordsList;
    set<string> uniqueWordsSet;
    map<string, int> wordCountMap;

    while (ss >> word) {
        wordsList.push_back(word);
        uniqueWordsSet.insert(word);
        wordCountMap[word]++;
    }


    for (const string& uniqueWord : uniqueWordsSet) {
        cout << uniqueWord << " ";
    }
    cout << endl;
    for (const string& word : wordsList) {
        if (wordCountMap[word] > 0) {
            cout << word << " ";
            wordCountMap[word] = 0;
        }
    }
    cout << endl;

    return 0;
}
