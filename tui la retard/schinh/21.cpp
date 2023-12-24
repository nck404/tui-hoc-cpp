#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include <algorithm>
#include <locale>

using namespace std;

string toLowercase(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

int main() {
    string S, T;
    getline(cin, S);
    getline(cin, T);

    S = toLowercase(S);
    T = toLowercase(T);

    stringstream ssS(S);
    stringstream ssT(T);

    set<string> setS;
    set<string> setResult;

    string word;

    while (ssS >> word) {
        setS.insert(word);
    }

    while (ssT >> word) {
        if (setS.find(word) != setS.end()) {
            setResult.insert(word);
        }
    }

    for (const string &resultWord : setResult) {
        cout << resultWord << " ";
    }

    return 0;
}
