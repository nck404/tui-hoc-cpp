#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string s) {
    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    string S;
    getline(cin, S);

    int wordCount = countWords(S);
    cout << wordCount << endl;

    return 0;
}
