#include <iostream>
#include <string>
#include <sstream>
#include <set>
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
    set<string> setT;

    string word;
    while (ssS >> word) {
        setS.insert(word);
    }

    while (ssT >> word) {
        setT.insert(word);
    }

    for (const string &sWord : setS) {
        if (setT.find(sWord) == setT.end()) {
            cout << sWord << " ";
        }
    }

    return 0;
}
