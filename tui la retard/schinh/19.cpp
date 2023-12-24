#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <regex>

using namespace std;

string normalizeName(const string& name) {
    string normalized = name;
    regex multipleSpaces("\\s+");
    normalized = regex_replace(normalized, multipleSpaces, " ");
    while (normalized[0] == ' ') {
        normalized = normalized.substr(1);
    }
    while (normalized[normalized.size() - 1] == ' ') {
        normalized = normalized.substr(0, normalized.size() - 1);
    }
    for (char& c : normalized) {
        c = tolower(c);
    }
    return normalized;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    vector<string> emailResults;

    map<string, int> emailCount;
    
    int i = 0;
    while (i < N) {
        string input;
        getline(cin, input);
        string name, date;
        size_t found = input.find_last_of(" ");
        if (found != string::npos) {
            name = input.substr(0, found);
            date = input.substr(found + 1);
        } else {
            name = input;
            date = "";
        }
        string normalized = normalizeName(name);

        if (emailCount.find(normalized) == emailCount.end()) {
            emailCount[normalized] = 0;
        }
        emailCount[normalized]++;
        
        string email = normalized;
        if (emailCount[normalized] > 1) {
            email += to_string(emailCount[normalized]);
        }
        email += "@xyz.edu.vn";
        string password = date;
        password.erase(remove(date.begin(), date.end(), '/'), date.end());
        emailResults.push_back(email);
        emailResults.push_back(password);
        i++;
    }

    // In tất cả các email và mật khẩu
    for (const string& result : emailResults) {
        cout << result << endl;
    }
    
    return 0;
}
